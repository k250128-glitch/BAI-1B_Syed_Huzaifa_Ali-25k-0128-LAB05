#include <stdio.h>
#include <stdlib.h>

int main(){
	int device;
	int sympton_code;
	
	printf("TECH SUPPORT DIAGNOSTIC SYSTEM");
	printf("Enter your Device type:\nLaptop[1]\nSmartphone[2]\nRouter[3]\n");
	scanf(" %d",&device);
	if (device==1){
	
		printf("Enter Sympton Code (10 for Wont turn on, 11 for Overheating,12 for Slow performance) :");
		scanf(" %d", &sympton_code);
		switch (sympton_code){
		
		
			case 10:
				printf("Check power adapter andbattery connections. Try adifferent power outlet. Remove battery and hold power button for 30 seconds.");
				break;
			case 11:
				printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a coolingpad. Monitor CPU usa");
				break;
			case 12:
				printf("Run system diagnostics andcheck resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.");
				break;
			default:
				printf("Incorect code");
				return 0;
	}	}
	else if (device==2){
	
		printf("Enter Sympton Code .10 for Battery drains fast, 11 for No signal,12 for Touch screen unresponsive:\n");
		scanf(" %d", &sympton_code);
		switch (sympton_code){
				
				case 20:
					printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
					break;
				case 21:
					printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.");
					break;
				case 22:
					printf("Perform screen calibration test. Clean screen surface.Restart device. Check for software updates.");
					break;
				default:
					printf("Incorect code");
					return 0;
		}
	}
	else if (device==3){
		printf("Enter Sympton Code (10 for No internet Connection, 11 for Wifi signal weak,12 for Device cant connect):\n");
		scanf(" %d", &sympton_code);
		switch (sympton_code){			
				case 30:
					printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
					break;
				case 31:
					printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
					break;
				case 32:
					printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");
					break;
				default:
					printf("Incorect code");
				return 0;
		}
	}
	else{
		printf("INVALID CODE");
	}		
		
	
	
	
	return 0;
}

