# Electronic, Digital, and Microcontroller Intergration


## Software tools

> All software tools here support only `Windows`.

:floppy_disk: [C Compiler for PIC24](https://drive.google.com/file/d/14edGjD6mw1PcMFoGK_K2k3KCFA_u6wXK/view?usp=sharing)

:floppy_disk: [Command-line tools](https://drive.google.com/file/d/1ua2V8_DXyO1gwbfTRWcyRmY8oQZDfgJG/view?usp=sharing)

:floppy_disk: [Proteus Circuit Simulator](https://drive.google.com/file/d/1pApKefZdIldTvJqVfVlSml4y2Z7PYxfl/view?usp=sharing)

:floppy_disk: [Visual Studio Code](https://code.visualstudio.com/)

---

## Installation

Installing the three software tools requires the following steps:

1) Download and extract the file.

2) Run the *.exe using `run as administrator`. 

---

## Activation

After the three software tools are installed, the activation process is required.

1) go to `C:\ecc-lab\tools`.

2) run the `ecc-tools-manager-gui.exe` (run it using `run as administrator`), then click `Activate` button.

---

## Code Compilation

To compile the `main.c` to `firmware.hex`, the following steps are required:

1) Right-click on the `main.c` and choose `Open in Integrated Terminal`.

2) Run the command `ecc-pic24-cli -build`.

>The `firmware.hex` will be saved in the `./output` directory.

---

## Simulation

1) Run the `Proteus` using `Run as administrator`.

2) Open the `pic24_board_circuit.pdsprj` saved in the `circuit` directory.

3) Double-click on the MCU, and browse to the `firmware.hex`.

4) Run the simulator and check the result.

