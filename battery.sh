while true
do
	battery_level=`acpi -b | grep -P -o '[0-9]+(?=%)'`
	if [ $battery_level -le 10 ]; then
		low_battery
	fi
	sleep 100
done
