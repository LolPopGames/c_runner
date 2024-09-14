# c_runner

## Description

This project is needed to conveniently run __C__ codes using the __code-runner__ extension in __vscode__

## Installation

Use __Makefile__ to build file
In the release version I will place the __exe__ file in the build folder.

## Usage

### Open settings.json

In vscode, press __ctrl+comma__ and press the file button in the upper right corner (Open Settings (json)). In the file.

### Add a command

Create (if not) the key "code-runner.executorMap".
In the value (dict), create (if not) the key "c".
In the value (string), write the command "cd $dir && path\\to\\c_runner $fileNameWithoutExtention"
Instead of path\\to\\c_runner, substitute the absolute path where you will install c_runner

### Use

Use __ctrl+alt+n__ in __c__ files to use c_runner

## Disclaimer

To the fullest extent permitted by law, the author has dedicated this project to the public domain. There are no warranties or guarantees of any kind, and the author accepts no liability for any issues that may arise from the use of this project.

## Contact

newlpg772@gmail.com