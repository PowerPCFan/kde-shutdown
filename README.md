# kde-shutdown

## Compiling
- `sudo apt install build-essential pkg-config qt6-base-dev qt6-tools-dev`
- `g++ main.cpp -o kde-shutdown $(pkg-config --cflags --libs Qt6Widgets Qt6DBus)`
- `chmod +x ./kde-shutdown`

## Usage
- `./kde-shutdown` in project dir

## Issues
this is an extremely simple program theres not much that could go wrong 😭
google the issue youre encountering and theres probably a fix
