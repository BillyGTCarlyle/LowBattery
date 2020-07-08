# LowBattery

I made a very small program that pops up and tells me that my battery is low because I keep forgetting to plug my laptop in when it's about to run out. I don't actually use it anymore though because I discovered notification daemons, and calling notify-send is way more efficient.

## Build instructions

### Dependencies
Make sure you have Qt 5 installed on your system.

### Steps
Clone the repo
``` git clone https://github.com/BillyGTCarlyle/LowBattery.git ```
Enter the directory
``` cd LowBattery ```
Build the program
```make```
Install the program
```sudo make install```
Once the program has been installed, add the battery.sh file to your startup scripts, either in your init.d or your window manager's config.

### Never forget to plug your laptop in again
