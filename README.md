# SichereSoftwareEntwicklung

```markdown
# Running the C Program on Windows and MacOS

This guide will assist you in running the provided C program on both Windows and MacOS. clone the project from https://github.com/Baharbrk/SichereSoftwareEntwicklung

## Prerequisites

Before proceeding, make sure you have a C compiler installed on your system. Windows users can use GCC via MinGW, and MacOS users can use the Xcode Command Line Tools.

### Windows Setup

1. **Install MinGW:**
   - Visit [MinGW's official website](http://www.mingw.org/) and download the MinGW installation manager.
   - Run the installer and select "Basic Setup".
   - Choose `mingw32-base-bin` for the base C compiler.
   - Apply changes and wait for the download and installation to complete.

2. **Add MinGW to System PATH:**
   - After installation, locate the MinGW installation directory (usually `C:\MinGW`).
   - Copy the path to the `bin` folder inside it (typically `C:\MinGW\bin`).
   - Open the Start Search, type in “env”, and choose "Edit the system environment variables".
   - In the System Properties window, click on the "Environment Variables..." button.
   - In the Environment Variables window, under System variables, find and select the `Path` variable, then click Edit.
   - In the Edit Environment Variables window, click New and paste the copied path.
   - Click OK in all windows to apply the changes.

### MacOS Setup

1. **Install Xcode Command Line Tools:**
   - Open Terminal.
   - Run the command: `xcode-select --install`
   - Follow the on-screen instructions to install.

## Compiling and Running the Program

After setting up the compiler, you can compile and run your C program using these steps.

### Windows

1. **Open Command Prompt:**
   - Press `Win + R`, type `cmd`, and press Enter.

2. **Navigate to Your Program's Directory:**
   - Use `cd` to navigate to the folder containing your C program (e.g., `cd Downloads/SichereSoftwareEntwicklung/bufferOverFlow/`).

3. **Compile the Program:**
   - Compile the program with: `gcc -o program bufferOverFlow.c userProfile.c` for bufferoverflow
   - Compile the program with: `gcc -o program errorHandlingFailure.c` for errorHandling App

4. **Run the Program:**
   - Execute your program: `./program`

### MacOS

1. **Open Terminal:**
   - Find Terminal in Applications > Utilities.

2. **Navigate to Your Program's Directory:**
   - Use `cd` to move to the folder containing your C program.

3. **Compile the Program:**
   - Run: `clang -o program bufferOverFlow.c userProfile.c` for bufferoverflow
   - Run: `clang -o program errorHandlingFailure.c` for errorHandling App


4. **Run the Program:**
   - Execute your program: `./program`





