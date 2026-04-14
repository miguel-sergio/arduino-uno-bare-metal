# Arduino UNO (ATmega328P) - Bare-Metal

A collection of bare-metal Arduino UNO R3 projects designed to help you get started in embedded systems by programming the ATmega328P directly at register level, without Arduino abstractions.

This repository follows an incremental approach. Each project builds on the previous one, adding new peripherals and concepts progressively. You can navigate to any project using git tags and find the complete state up to that point.

```bash
# Example: checkout the state at Blinky project
git checkout 01-blinky
```

## Requirements

**Hardware:**
- Arduino UNO (or compatible ATmega328P board).
- USB cable (Type A to Type B).
- Jumper wires and a breadboard (for external circuits).

**Software:**
- avr-gcc (AVR toolchain).
- avrdude (for flashing).
- make (from project 13 onward).
- A terminal and VS Code.

**Knowledge:**
- Basic C programming.
- Comfortable using the terminal.

## Projects

This collection grows project by project. Each entry links to a brief description of what you will learn.

| # | Topic | Tag |
|---|-------|-----|
| - | - | - |

## Getting Started

1. Clone the repository:

```bash
git clone https://github.com/miguelsergio/arduino-uno-bare-metal.git
cd arduino-uno-bare-metal
```

2. List all available projects:

```bash
git tag -l "[0-9]*"
```

3. Checkout a specific project:

```bash
git checkout 01-blinky
```

4. Follow the instructions in the README for that project's tag.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
