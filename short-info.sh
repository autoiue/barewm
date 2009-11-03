#!/bin/sh
TEMP=$(cat /proc/acpi/thermal_zone/THRM/temperature | awk '{print $2"C"}')
FREQ=$(cpufreq-info | awk '/current CPU frequency/ {print $5"MHz"}')
DATE=$(echo -n $(date +%B,\ %d\ -\ %I:%M\ %p))
SDA2=$(df -h | awk '/sda2/ {print $4"/"$2}')
INFO=$(echo -n "Storage: $SDA2 :: CPUFreq: $FREQ :: Temperature $TEMP :: $DATE")
echo -n "$INFO"
