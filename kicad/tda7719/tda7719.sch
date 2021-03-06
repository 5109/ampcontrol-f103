EESchema Schematic File Version 4
LIBS:tda7719-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ampcontrol-f103:TDA7719 U1
U 1 1 5DF2A1D7
P 6100 3600
F 0 "U1" H 6075 4715 50  0000 C CNN
F 1 "TDA7719" H 6075 4624 50  0000 C CNN
F 2 "Package_SO:TSSOP-28_4.4x9.7mm_P0.65mm" H 8500 4000 50  0001 C CNN
F 3 "" H 8500 4000 50  0001 C CNN
	1    6100 3600
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J1
U 1 1 5DF2AA2B
P 3200 2250
F 0 "J1" H 3200 2450 50  0000 C CNN
F 1 "IN0" V 3300 2250 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 2250 50  0001 C CNN
F 3 "~" H 3200 2250 50  0001 C CNN
	1    3200 2250
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J2
U 1 1 5DF2D026
P 3200 2700
F 0 "J2" H 3200 2900 50  0000 C CNN
F 1 "IN4" V 3300 2700 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 2700 50  0001 C CNN
F 3 "~" H 3200 2700 50  0001 C CNN
	1    3200 2700
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J3
U 1 1 5DF2D415
P 3200 3150
F 0 "J3" H 3200 3350 50  0000 C CNN
F 1 "IN1" V 3300 3150 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 3150 50  0001 C CNN
F 3 "~" H 3200 3150 50  0001 C CNN
	1    3200 3150
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J4
U 1 1 5DF2D98C
P 3200 3600
F 0 "J4" H 3200 3800 50  0000 C CNN
F 1 "IN2" V 3300 3600 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 3600 50  0001 C CNN
F 3 "~" H 3200 3600 50  0001 C CNN
	1    3200 3600
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J6
U 1 1 5DF2E196
P 3200 4500
F 0 "J6" H 3200 4700 50  0000 C CNN
F 1 "IN6" V 3300 4500 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 4500 50  0001 C CNN
F 3 "~" H 3200 4500 50  0001 C CNN
	1    3200 4500
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J5
U 1 1 5DF2DCC0
P 3200 4050
F 0 "J5" H 3200 4250 50  0000 C CNN
F 1 "IN5" V 3300 4050 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3200 4050 50  0001 C CNN
F 3 "~" H 3200 4050 50  0001 C CNN
	1    3200 4050
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3400 3500 3550 3500
Wire Wire Line
	5150 3700 4100 3700
Wire Wire Line
	4350 3350 4350 3250
Wire Wire Line
	4350 3250 4100 3250
Wire Wire Line
	4450 3250 5150 3250
Wire Wire Line
	4350 3350 5150 3350
Wire Wire Line
	3400 2800 3800 2800
Wire Wire Line
	4550 2800 4550 3150
Wire Wire Line
	4550 3150 5150 3150
Wire Wire Line
	3400 2600 3550 2600
Wire Wire Line
	4650 2600 4650 3000
Wire Wire Line
	4650 3000 5150 3000
Wire Wire Line
	3400 2350 3800 2350
Wire Wire Line
	4850 2350 4850 2900
Wire Wire Line
	4850 2900 5150 2900
Wire Wire Line
	3400 2150 3500 2150
Wire Wire Line
	3400 3050 3550 3050
Wire Wire Line
	4450 3050 4450 3250
Wire Wire Line
	3400 3950 3550 3950
Wire Wire Line
	4000 3950 4000 3850
Wire Wire Line
	4000 3850 5150 3850
Wire Wire Line
	4200 4150 4200 3950
Wire Wire Line
	4200 3950 5150 3950
Wire Wire Line
	3400 4150 3800 4150
Wire Wire Line
	3400 4400 3550 4400
Wire Wire Line
	4300 4400 4300 4050
Wire Wire Line
	4300 4050 5150 4050
Wire Wire Line
	3400 4600 3800 4600
Wire Wire Line
	4400 4600 4400 4150
Wire Wire Line
	4400 4150 5150 4150
Wire Wire Line
	3400 2250 3500 2250
Wire Wire Line
	3500 2250 3500 2700
Wire Wire Line
	3500 2700 3400 2700
Wire Wire Line
	3500 2700 3500 3150
Wire Wire Line
	3500 3150 3400 3150
Connection ~ 3500 2700
Wire Wire Line
	3500 4050 3400 4050
Wire Wire Line
	3500 4050 3500 4500
Wire Wire Line
	3500 4500 3400 4500
Connection ~ 3500 4050
$Comp
L power:GNDA #PWR01
U 1 1 5DF408F0
P 3500 4700
F 0 "#PWR01" H 3500 4450 50  0001 C CNN
F 1 "GNDA" H 3505 4527 50  0000 C CNN
F 2 "" H 3500 4700 50  0001 C CNN
F 3 "" H 3500 4700 50  0001 C CNN
	1    3500 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 4700 3500 4500
Connection ~ 3500 4500
$Comp
L power:GNDA #PWR02
U 1 1 5DF41800
P 4600 4700
F 0 "#PWR02" H 4600 4450 50  0001 C CNN
F 1 "GNDA" H 4605 4527 50  0000 C CNN
F 2 "" H 4600 4700 50  0001 C CNN
F 3 "" H 4600 4700 50  0001 C CNN
	1    4600 4700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5DF41B94
P 4600 4450
F 0 "R1" H 4670 4496 50  0000 L CNN
F 1 "0" H 4670 4405 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 4530 4450 50  0001 C CNN
F 3 "~" H 4600 4450 50  0001 C CNN
	1    4600 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4600 4700 4600 4600
Wire Wire Line
	5150 4300 4950 4300
Wire Wire Line
	4950 4300 4950 4350
$Comp
L power:GNDA #PWR03
U 1 1 5DF4531F
P 4950 4700
F 0 "#PWR03" H 4950 4450 50  0001 C CNN
F 1 "GNDA" H 4955 4527 50  0000 C CNN
F 2 "" H 4950 4700 50  0001 C CNN
F 3 "" H 4950 4700 50  0001 C CNN
	1    4950 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4950 4700 4950 4650
Wire Wire Line
	3500 3150 3500 4050
Connection ~ 3500 3150
$Comp
L power:GNDA #PWR07
U 1 1 5DF46D69
P 7150 4700
F 0 "#PWR07" H 7150 4450 50  0001 C CNN
F 1 "GNDA" H 7155 4527 50  0000 C CNN
F 2 "" H 7150 4700 50  0001 C CNN
F 3 "" H 7150 4700 50  0001 C CNN
	1    7150 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 4700 7150 4350
Wire Wire Line
	7150 4350 7000 4350
$Comp
L power:GNDA #PWR012
U 1 1 5DF4DB20
P 8300 4700
F 0 "#PWR012" H 8300 4450 50  0001 C CNN
F 1 "GNDA" H 8305 4527 50  0000 C CNN
F 2 "" H 8300 4700 50  0001 C CNN
F 3 "" H 8300 4700 50  0001 C CNN
	1    8300 4700
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J11
U 1 1 5DF4EE01
P 8600 4500
F 0 "J11" H 8600 4700 50  0000 C CNN
F 1 "SUB" V 8700 4500 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 8600 4500 50  0001 C CNN
F 3 "~" H 8600 4500 50  0001 C CNN
	1    8600 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	8400 4500 8300 4500
Connection ~ 8300 4500
Wire Wire Line
	8300 4500 8300 4700
Wire Wire Line
	7000 4100 7450 4100
Wire Wire Line
	7450 4100 7450 4400
Wire Wire Line
	7450 4400 8400 4400
Wire Wire Line
	8400 4600 7350 4600
Wire Wire Line
	7350 4600 7350 4200
Wire Wire Line
	7350 4200 7000 4200
$Comp
L power:+9VA #PWR06
U 1 1 5DF574E5
P 7150 1850
F 0 "#PWR06" H 7150 1725 50  0001 C CNN
F 1 "+9VA" H 7165 2023 50  0000 C CNN
F 2 "" H 7150 1850 50  0001 C CNN
F 3 "" H 7150 1850 50  0001 C CNN
	1    7150 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 3250 7150 3250
Wire Wire Line
	7150 3250 7150 1950
Wire Wire Line
	8300 2200 8400 2200
Wire Wire Line
	8300 1850 8300 2000
$Comp
L power:+5V #PWR011
U 1 1 5DF4BC37
P 8300 1850
F 0 "#PWR011" H 8300 1700 50  0001 C CNN
F 1 "+5V" H 8315 2023 50  0000 C CNN
F 2 "" H 8300 1850 50  0001 C CNN
F 3 "" H 8300 1850 50  0001 C CNN
	1    8300 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x04 J7
U 1 1 5DF45374
P 8600 2300
F 0 "J7" H 8600 2500 50  0000 C CNN
F 1 "I2C" V 8700 2250 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 8600 2300 50  0001 C CNN
F 3 "~" H 8600 2300 50  0001 C CNN
	1    8600 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7350 3000 7000 3000
Wire Wire Line
	8400 2500 8300 2500
$Comp
L Connector_Generic:Conn_01x05 J8
U 1 1 5DF6A1CF
P 8600 2950
F 0 "J8" H 8600 3250 50  0000 C CNN
F 1 "MUTE" V 8700 2950 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 8600 2950 50  0001 C CNN
F 3 "~" H 8600 2950 50  0001 C CNN
	1    8600 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 2500 8300 3150
Wire Wire Line
	7800 3050 8400 3050
Wire Wire Line
	7000 3500 7800 3500
Wire Wire Line
	7800 3050 7800 3500
Wire Wire Line
	8400 3150 8300 3150
Connection ~ 8300 3150
$Comp
L Connector_Generic:Conn_01x03 J9
U 1 1 5DF77816
P 8600 3550
F 0 "J9" H 8600 3750 50  0000 C CNN
F 1 "FRONT" V 8700 3550 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 8600 3550 50  0001 C CNN
F 3 "~" H 8600 3550 50  0001 C CNN
	1    8600 3550
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J10
U 1 1 5DF78C27
P 8600 4050
F 0 "J10" H 8600 4250 50  0000 C CNN
F 1 "REAR" V 8700 4050 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 8600 4050 50  0001 C CNN
F 3 "~" H 8600 4050 50  0001 C CNN
	1    8600 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 3150 8300 3550
Wire Wire Line
	7700 2950 8400 2950
Wire Wire Line
	7000 3400 7700 3400
Wire Wire Line
	7700 3400 7700 2950
Wire Wire Line
	8400 2850 7000 2850
Wire Wire Line
	7000 2750 8400 2750
Wire Wire Line
	7000 3650 7900 3650
Wire Wire Line
	7900 3650 7900 3450
Wire Wire Line
	7900 3450 8400 3450
Wire Wire Line
	8400 3550 8300 3550
Connection ~ 8300 3550
Wire Wire Line
	8300 3550 8300 4050
Wire Wire Line
	7000 3750 8200 3750
Wire Wire Line
	8200 3750 8200 3950
Wire Wire Line
	8200 3950 8400 3950
Wire Wire Line
	8400 4050 8300 4050
Connection ~ 8300 4050
Wire Wire Line
	8300 4050 8300 4500
Wire Wire Line
	8400 3650 8000 3650
Wire Wire Line
	8000 3650 8000 3950
Wire Wire Line
	7600 3100 7000 3100
Wire Wire Line
	8100 4150 8400 4150
Wire Wire Line
	7000 3850 8100 3850
Wire Wire Line
	8100 3850 8100 4150
$Comp
L Device:C C1
U 1 1 5DFDA0A5
P 3650 2150
F 0 "C1" V 3550 2100 50  0000 R BNN
F 1 "0.22" V 3550 2200 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3688 2000 50  0001 C CNN
F 3 "~" H 3650 2150 50  0001 C CNN
	1    3650 2150
	0    1    1    0   
$EndComp
$Comp
L Device:C C7
U 1 1 5DFE0BBB
P 3950 2350
F 0 "C7" V 3850 2300 50  0000 R BNN
F 1 "0.22" V 3850 2400 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 2200 50  0001 C CNN
F 3 "~" H 3950 2350 50  0001 C CNN
	1    3950 2350
	0    1    1    0   
$EndComp
Wire Wire Line
	4100 2350 4850 2350
$Comp
L Device:C C2
U 1 1 5DFE0E79
P 3700 2600
F 0 "C2" V 3600 2550 50  0000 R BNN
F 1 "0.22" V 3600 2650 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3738 2450 50  0001 C CNN
F 3 "~" H 3700 2600 50  0001 C CNN
	1    3700 2600
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 2600 4650 2600
$Comp
L Device:C C8
U 1 1 5DFE118D
P 3950 2800
F 0 "C8" V 3850 2750 50  0000 R BNN
F 1 "0.22" V 3850 2850 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 2650 50  0001 C CNN
F 3 "~" H 3950 2800 50  0001 C CNN
	1    3950 2800
	0    1    1    0   
$EndComp
Wire Wire Line
	4100 2800 4550 2800
Wire Wire Line
	4950 2800 5150 2800
Wire Wire Line
	3800 2150 4950 2150
Wire Wire Line
	4950 2150 4950 2800
$Comp
L Device:C C3
U 1 1 5DFF4A58
P 3700 3050
F 0 "C3" V 3600 3000 50  0000 R BNN
F 1 "0.22" V 3600 3100 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3738 2900 50  0001 C CNN
F 3 "~" H 3700 3050 50  0001 C CNN
	1    3700 3050
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 3050 4450 3050
$Comp
L Device:C C9
U 1 1 5DFF4E0A
P 3950 3250
F 0 "C9" V 3850 3200 50  0000 R BNN
F 1 "0.22" V 3850 3300 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 3100 50  0001 C CNN
F 3 "~" H 3950 3250 50  0001 C CNN
	1    3950 3250
	0    1    1    0   
$EndComp
Wire Wire Line
	3800 3250 3400 3250
$Comp
L Device:C C4
U 1 1 5DFF5193
P 3700 3500
F 0 "C4" V 3600 3450 50  0000 R BNN
F 1 "0.22" V 3600 3550 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3738 3350 50  0001 C CNN
F 3 "~" H 3700 3500 50  0001 C CNN
	1    3700 3500
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 3500 5150 3500
Wire Wire Line
	3800 3700 3400 3700
Wire Wire Line
	4200 3600 3400 3600
$Comp
L Device:C C10
U 1 1 5DFF5522
P 3950 3700
F 0 "C10" V 3850 3650 50  0000 R BNN
F 1 "0.22" V 3850 3750 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 3550 50  0001 C CNN
F 3 "~" H 3950 3700 50  0001 C CNN
	1    3950 3700
	0    1    1    0   
$EndComp
$Comp
L Device:CP C13
U 1 1 5DFF930F
P 4350 3600
F 0 "C13" V 4250 3550 50  0000 R BNN
F 1 "22.0" V 4250 3650 50  0000 L BNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 4388 3450 50  0001 C CNN
F 3 "~" H 4350 3600 50  0001 C CNN
	1    4350 3600
	0    1    1    0   
$EndComp
Wire Wire Line
	7150 1950 6850 1950
Connection ~ 7150 1950
Wire Wire Line
	7150 1950 7150 1850
Wire Wire Line
	6850 1950 6850 2000
$Comp
L Device:CP C16
U 1 1 5DFFCE80
P 6850 2150
F 0 "C16" H 6950 2200 50  0000 L TNN
F 1 "47.0" H 6950 2100 50  0000 L TNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 6888 2000 50  0001 C CNN
F 3 "~" H 6850 2150 50  0001 C CNN
	1    6850 2150
	1    0    0    -1  
$EndComp
$Comp
L power:GNDA #PWR05
U 1 1 5E00C35C
P 6850 2350
F 0 "#PWR05" H 6850 2100 50  0001 C CNN
F 1 "GNDA" H 6855 2177 50  0000 C CNN
F 2 "" H 6850 2350 50  0001 C CNN
F 3 "" H 6850 2350 50  0001 C CNN
	1    6850 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 2350 6850 2300
Wire Wire Line
	7600 2300 8400 2300
Wire Wire Line
	7600 2300 7600 3100
Connection ~ 7600 2300
Wire Wire Line
	7350 2200 7350 2400
Wire Wire Line
	7350 2400 7350 3000
Connection ~ 7350 2400
$Comp
L Device:R R2
U 1 1 5DF5C169
P 7350 2050
F 0 "R2" H 7420 2096 50  0000 L CNN
F 1 "R" H 7420 2005 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 7280 2050 50  0001 C CNN
F 3 "~" H 7350 2050 50  0001 C CNN
	1    7350 2050
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5DF5C4CB
P 7600 2050
F 0 "R3" H 7670 2096 50  0000 L CNN
F 1 "R" H 7670 2005 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" V 7530 2050 50  0001 C CNN
F 3 "~" H 7600 2050 50  0001 C CNN
	1    7600 2050
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR08
U 1 1 5DF5CA59
P 7350 1850
F 0 "#PWR08" H 7350 1700 50  0001 C CNN
F 1 "+5V" H 7365 2023 50  0000 C CNN
F 2 "" H 7350 1850 50  0001 C CNN
F 3 "" H 7350 1850 50  0001 C CNN
	1    7350 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7350 1900 7350 1850
$Comp
L power:+5V #PWR09
U 1 1 5DF5E518
P 7600 1850
F 0 "#PWR09" H 7600 1700 50  0001 C CNN
F 1 "+5V" H 7615 2023 50  0000 C CNN
F 2 "" H 7600 1850 50  0001 C CNN
F 3 "" H 7600 1850 50  0001 C CNN
	1    7600 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	7600 1850 7600 1900
Wire Wire Line
	7600 2200 7600 2300
Wire Wire Line
	7350 2400 8400 2400
$Comp
L Device:C C15
U 1 1 5E018F36
P 6450 2150
F 0 "C15" H 6350 2100 50  0000 R BNN
F 1 "0.22" H 6350 2200 50  0000 R BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 6488 2000 50  0001 C CNN
F 3 "~" H 6450 2150 50  0001 C CNN
	1    6450 2150
	-1   0    0    1   
$EndComp
Wire Wire Line
	6850 1950 6450 1950
Wire Wire Line
	6450 1950 6450 2000
Connection ~ 6850 1950
$Comp
L power:GNDA #PWR04
U 1 1 5E01D366
P 6450 2350
F 0 "#PWR04" H 6450 2100 50  0001 C CNN
F 1 "GNDA" H 6455 2177 50  0000 C CNN
F 2 "" H 6450 2350 50  0001 C CNN
F 3 "" H 6450 2350 50  0001 C CNN
	1    6450 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 2300 6450 2350
$Comp
L Device:C C5
U 1 1 5E021716
P 3700 3950
F 0 "C5" V 3600 3900 50  0000 R BNN
F 1 "0.22" V 3600 4000 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3738 3800 50  0001 C CNN
F 3 "~" H 3700 3950 50  0001 C CNN
	1    3700 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 3950 4000 3950
$Comp
L Device:C C11
U 1 1 5E025BCC
P 3950 4150
F 0 "C11" V 3850 4100 50  0000 R BNN
F 1 "0.22" V 3850 4200 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 4000 50  0001 C CNN
F 3 "~" H 3950 4150 50  0001 C CNN
	1    3950 4150
	0    1    1    0   
$EndComp
Wire Wire Line
	4100 4150 4200 4150
$Comp
L Device:C C6
U 1 1 5E025F2C
P 3700 4400
F 0 "C6" V 3600 4350 50  0000 R BNN
F 1 "0.22" V 3600 4450 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3738 4250 50  0001 C CNN
F 3 "~" H 3700 4400 50  0001 C CNN
	1    3700 4400
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 4400 4300 4400
$Comp
L Device:C C12
U 1 1 5E02A122
P 3950 4600
F 0 "C12" V 3850 4550 50  0000 R BNN
F 1 "0.22" V 3850 4650 50  0000 L BNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3988 4450 50  0001 C CNN
F 3 "~" H 3950 4600 50  0001 C CNN
	1    3950 4600
	0    1    1    0   
$EndComp
Wire Wire Line
	4100 4600 4400 4600
$Comp
L Device:CP C14
U 1 1 5DF4A687
P 4950 4500
F 0 "C14" H 5050 4550 50  0000 L TNN
F 1 "10.0" H 5050 4450 50  0000 L TNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 4988 4350 50  0001 C CNN
F 3 "~" H 4950 4500 50  0001 C CNN
	1    4950 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4600 3600 4500 3600
Connection ~ 4600 3600
Wire Wire Line
	4600 4300 4600 3600
Wire Wire Line
	5150 3600 4600 3600
$Comp
L Device:CP C17
U 1 1 5DF6A0EF
P 7800 4150
F 0 "C17" H 7900 4200 50  0000 L TNN
F 1 "10.0" H 7900 4100 50  0000 L TNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 7838 4000 50  0001 C CNN
F 3 "~" H 7800 4150 50  0001 C CNN
	1    7800 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	8000 3950 7000 3950
Wire Wire Line
	7800 4000 7800 3500
Connection ~ 7800 3500
$Comp
L power:GNDA #PWR010
U 1 1 5DF73B10
P 7800 4700
F 0 "#PWR010" H 7800 4450 50  0001 C CNN
F 1 "GNDA" H 7805 4527 50  0000 C CNN
F 2 "" H 7800 4700 50  0001 C CNN
F 3 "" H 7800 4700 50  0001 C CNN
	1    7800 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7800 4300 7800 4700
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5DF898F7
P 6850 1900
F 0 "#FLG01" H 6850 1975 50  0001 C CNN
F 1 "PWR_FLAG" H 6850 2073 50  0001 C CNN
F 2 "" H 6850 1900 50  0001 C CNN
F 3 "~" H 6850 1900 50  0001 C CNN
	1    6850 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 1900 6850 1950
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5DF9323B
P 8200 2000
F 0 "#FLG02" H 8200 2075 50  0001 C CNN
F 1 "PWR_FLAG" H 8200 2173 50  0001 C CNN
F 2 "" H 8200 2000 50  0001 C CNN
F 3 "~" H 8200 2000 50  0001 C CNN
	1    8200 2000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8300 2000 8200 2000
Connection ~ 8300 2000
Wire Wire Line
	8300 2000 8300 2200
$Comp
L power:PWR_FLAG #FLG03
U 1 1 5DF97EB5
P 8200 2500
F 0 "#FLG03" H 8200 2575 50  0001 C CNN
F 1 "PWR_FLAG" H 8200 2673 50  0001 C CNN
F 2 "" H 8200 2500 50  0001 C CNN
F 3 "~" H 8200 2500 50  0001 C CNN
	1    8200 2500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8200 2500 8300 2500
Connection ~ 8300 2500
Wire Wire Line
	5850 1950 6450 1950
Connection ~ 6450 1950
$Comp
L power:GNDA #PWR0101
U 1 1 5DFBE200
P 5950 2100
F 0 "#PWR0101" H 5950 1850 50  0001 C CNN
F 1 "GNDA" H 5955 1927 50  0000 C CNN
F 2 "" H 5950 2100 50  0001 C CNN
F 3 "" H 5950 2100 50  0001 C CNN
	1    5950 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 2050 5950 2050
Wire Wire Line
	5950 2050 5950 2100
$Comp
L Connector:Screw_Terminal_01x02 J12
U 1 1 5DFB7BD0
P 5650 2050
F 0 "J12" H 5568 1725 50  0000 C CNN
F 1 "PWR" H 5568 1816 50  0000 C CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 5650 2050 50  0001 C CNN
F 3 "~" H 5650 2050 50  0001 C CNN
	1    5650 2050
	-1   0    0    1   
$EndComp
$EndSCHEMATC
