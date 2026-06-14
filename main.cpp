#include <QApplication>
#include <QMessageBox>
#include <QDBusInterface>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    if (QMessageBox::question(nullptr, "Shutdown Confirmation", "Would you like to shut down?") == QMessageBox::Yes) {
        QDBusInterface iface(
            "org.kde.Shutdown",
            "/Shutdown",
            "org.kde.Shutdown"
        );

        iface.call("logoutAndShutdown");
    }

    return 0;
}
