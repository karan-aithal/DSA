# CP-VSCode-Setup
A Competitive Programming setup using VSCode for C++ users in Windows and Ubuntu with Debugging support.


https://chatgpt.com/share/6884c72d-3e94-800e-809f-e9aecdc5eff6


## **Features**
1) VSCode ready to use out of the box (Only windows users need to correct MinGW installation path).
1) Run `.\windows-reset.bat` in Windows or `./ubuntu-reset.sh` in Ubuntu to reset the `Current` Folder.
1) All `.cpp` files automatically take input from `input.txt` and output to `output.txt` in the same folder. No need for complicated `ifdef`s.
1) Leverage powerful features of VSCode:
   * Step Through Debugging (Execute the code line by line, Hover over variables to get values)
   * Debug Console (View any object i.e. map, set, vector or any complex object)
   * Zen Mode (Utilize your screen to the fullest)

## **Prerequisites**

### Windows
1) Follow Steps 1-4 from [Official VSCode Windows Prerequisites](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)
1) [Check your MinGW installation](https://code.visualstudio.com/docs/cpp/config-mingw#_check-your-mingw-installation)

You are good to go!

### Ubuntu
1) Follow Steps 1-2 from [Official VSCode Linux Prerequisites](https://code.visualstudio.com/docs/cpp/config-linux#_prerequisites)
1) Make sure g++ is installed
    * Install
    ```bash
    sudo apt-get update
    sudo apt-get install g++
    sudo apt-get install gdb
    ```
    * Check Installation
    ```bash
    g++ --version
    gdb --version
    ```

You are good to go!

## Installation
1) Download this repository and extract folder `CP-VSCODE-SETUP`.
1) Open VSCode. Click on `File->Open Folder->CP-VSCODE-SETUP`
1) Open a Terminal by clicking on `Terminal->New Terminal` or press `` Ctrl+` ``
1) You can always create a `Current` Folder from terminal by
    * Windows
    ```bash
    .\windows-reset.bat
    ```
    * Ubuntu
        * Make the script executable (Only needed once)
        ```bash
        chmod +x ubuntu-reset.sh
        ```
        * Execute the script
        ```bash
        ./ubuntu-reset.sh
        ```
    Note: To reset the `Current` Folder at any time, you may run this command again.

## Usage
1) You should write your code in the `Current` Folder.
1) Press `F5` to run any `.cpp` file. The file will automatically take input from `input.txt` and write output to `output.txt`

Happy Coding!
