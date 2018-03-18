while true
do
	battery_level=`acpi -b | grep -P -o '[0-9]+(?=%)'`
	battery_status=`acpi -b | grep -P -o '(Charging|Discharging)'`
	if [ $battery_level -le 15 ]; then
		if [ $battery_status = 'Discharging' ]; then
		low_battery
		fi
	fi
	sleep 60
done
