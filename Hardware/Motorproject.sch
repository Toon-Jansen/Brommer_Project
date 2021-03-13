EESchema Schematic File Version 4
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
Wire Wire Line
	2850 4150 2850 4350
Wire Wire Line
	4550 4350 4550 4150
Wire Wire Line
	2850 4350 3750 4350
$Comp
L power:GND #PWR0101
U 1 1 5FA5AD81
P 3750 4600
F 0 "#PWR0101" H 3750 4350 50  0001 C CNN
F 1 "GND" H 3755 4427 50  0000 C CNN
F 2 "" H 3750 4600 50  0001 C CNN
F 3 "" H 3750 4600 50  0001 C CNN
	1    3750 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 4600 3750 4350
Connection ~ 3750 4350
Wire Wire Line
	3750 4350 4550 4350
$Comp
L Transistor_FET:IRF540N Q3
U 1 1 5FA5B2C2
P 2750 3950
F 0 "Q3" H 2954 3996 50  0000 L CNN
F 1 "IRF540N" H 2954 3905 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 3000 3875 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 2750 3950 50  0001 L CNN
	1    2750 3950
	1    0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRF540N Q4
U 1 1 5FA5D76A
P 4650 3950
F 0 "Q4" H 4855 3996 50  0000 L CNN
F 1 "IRF540N" H 4855 3905 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 4900 3875 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 4650 3950 50  0001 L CNN
	1    4650 3950
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R10
U 1 1 5FA5F086
P 1600 3000
F 0 "R10" V 1393 3000 50  0000 C CNN
F 1 "10K" V 1484 3000 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 1530 3000 50  0001 C CNN
F 3 "~" H 1600 3000 50  0001 C CNN
	1    1600 3000
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 5FA60358
P 2050 2300
F 0 "R1" V 1843 2300 50  0000 C CNN
F 1 "1K" V 1934 2300 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 1980 2300 50  0001 C CNN
F 3 "~" H 2050 2300 50  0001 C CNN
	1    2050 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5FA60441
P 5500 2450
F 0 "R2" V 5293 2450 50  0000 C CNN
F 1 "1K" V 5384 2450 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 5430 2450 50  0001 C CNN
F 3 "~" H 5500 2450 50  0001 C CNN
	1    5500 2450
	0    1    1    0   
$EndComp
$Comp
L Device:R R9
U 1 1 5FA6075D
P 5550 3100
F 0 "R9" V 5343 3100 50  0000 C CNN
F 1 "10K" V 5434 3100 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 5480 3100 50  0001 C CNN
F 3 "~" H 5550 3100 50  0001 C CNN
	1    5550 3100
	0    1    1    0   
$EndComp
$Comp
L Transistor_FET:IRF540N Q2
U 1 1 5FA6180B
P 4650 2650
F 0 "Q2" H 4855 2696 50  0000 L CNN
F 1 "IRF540N" H 4855 2605 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 4900 2575 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 4650 2650 50  0001 L CNN
	1    4650 2650
	-1   0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRF540N Q1
U 1 1 5FA64859
P 2750 2650
F 0 "Q1" H 2954 2696 50  0000 L CNN
F 1 "IRF540N" H 2954 2605 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 3000 2575 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 2750 2650 50  0001 L CNN
	1    2750 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2850 2850 2850 3350
Wire Wire Line
	4550 2850 4550 3350
$Comp
L Transistor_BJT:BC547 Q8
U 1 1 5FA65B6F
P 2150 3000
F 0 "Q8" H 2341 3046 50  0000 L CNN
F 1 "BC547" H 2341 2955 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 2350 2925 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 2150 3000 50  0001 L CNN
	1    2150 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2550 2650 2250 2650
Wire Wire Line
	2250 2650 2250 2800
Wire Wire Line
	2200 2300 2250 2300
Wire Wire Line
	2250 2300 2250 2650
Connection ~ 2250 2650
Wire Wire Line
	1950 3000 1750 3000
Wire Wire Line
	2250 3200 2250 4350
Wire Wire Line
	2250 4350 2850 4350
Connection ~ 2850 4350
$Comp
L Device:CP C1
U 1 1 5FA69838
P 1250 2550
F 0 "C1" H 1368 2596 50  0000 L CNN
F 1 "10uF/50V" H 1368 2505 50  0000 L CNN
F 2 "Capacitor_Tantalum_SMD:CP_EIA-6032-28_Kemet-C" H 1288 2400 50  0001 C CNN
F 3 "~" H 1250 2550 50  0001 C CNN
	1    1250 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1900 2300 1250 2300
Wire Wire Line
	1250 2300 1250 2400
Wire Wire Line
	1250 3400 2850 3400
Connection ~ 2850 3400
Wire Wire Line
	2850 3400 2850 3750
$Comp
L power:+12C #PWR0102
U 1 1 5FA6A3E2
P 3750 1750
F 0 "#PWR0102" H 3750 1600 50  0001 C CNN
F 1 "+12C" H 3765 1923 50  0000 C CNN
F 2 "" H 3750 1750 50  0001 C CNN
F 3 "" H 3750 1750 50  0001 C CNN
	1    3750 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 1750 4550 1750
Wire Wire Line
	4550 1750 4550 2450
Wire Wire Line
	3750 1750 2850 1750
Wire Wire Line
	2850 1750 2850 2450
Connection ~ 3750 1750
Wire Wire Line
	5350 2450 5000 2450
Wire Wire Line
	5000 2450 5000 2650
Wire Wire Line
	5000 2650 4850 2650
$Comp
L Diode:1N4148 D2
U 1 1 5FA6B373
P 5800 2200
F 0 "D2" V 5846 2121 50  0000 R CNN
F 1 "1N4148" V 5755 2121 50  0000 R CNN
F 2 "Diode_SMD:D_SOD-123" H 5800 2025 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf" H 5800 2200 50  0001 C CNN
	1    5800 2200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5800 2350 5800 2450
Wire Wire Line
	5800 2450 5650 2450
$Comp
L Diode:1N4148 D1
U 1 1 5FA6D930
P 1250 2100
F 0 "D1" V 1296 2021 50  0000 R CNN
F 1 "1N4148" V 1205 2021 50  0000 R CNN
F 2 "Diode_SMD:D_SOD-123" H 1250 1925 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf" H 1250 2100 50  0001 C CNN
	1    1250 2100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1250 1950 1250 1750
Wire Wire Line
	1250 1750 2850 1750
Connection ~ 2850 1750
Wire Wire Line
	1250 2250 1250 2300
Connection ~ 1250 2300
Wire Wire Line
	5800 2050 5800 1750
Wire Wire Line
	5800 1750 4550 1750
Connection ~ 4550 1750
$Comp
L Transistor_BJT:BC547 Q9
U 1 1 5FA70F65
P 5100 3100
F 0 "Q9" H 5291 3146 50  0000 L CNN
F 1 "BC547" H 5291 3055 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 5300 3025 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 5100 3100 50  0001 L CNN
	1    5100 3100
	-1   0    0    -1  
$EndComp
Wire Wire Line
	5000 2650 5000 2900
Connection ~ 5000 2650
Wire Wire Line
	5000 3300 5000 4350
Wire Wire Line
	5000 4350 4550 4350
Connection ~ 4550 4350
$Comp
L Device:CP C2
U 1 1 5FA744C3
P 5800 2850
F 0 "C2" H 5918 2896 50  0000 L CNN
F 1 "10uF/50V" H 5918 2805 50  0000 L CNN
F 2 "Capacitor_Tantalum_SMD:CP_EIA-6032-28_Kemet-C" H 5838 2700 50  0001 C CNN
F 3 "~" H 5800 2850 50  0001 C CNN
	1    5800 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 3000 5800 3450
Wire Wire Line
	5800 3450 4550 3450
Connection ~ 4550 3450
Wire Wire Line
	4550 3450 4550 3750
Wire Wire Line
	5400 3100 5300 3100
Wire Wire Line
	5800 2450 5800 2700
Connection ~ 5800 2450
Wire Wire Line
	5700 3100 6200 3100
Wire Wire Line
	6200 3100 6200 3550
Wire Wire Line
	6200 3950 4850 3950
Wire Wire Line
	1450 3000 1150 3000
Wire Wire Line
	1150 3000 1150 3350
Wire Wire Line
	1150 3950 2550 3950
Text GLabel 4000 3350 0    50   Input ~ 0
R
Text GLabel 3500 3350 2    50   Input ~ 0
L
Wire Wire Line
	4000 3350 4550 3350
Connection ~ 4550 3350
Wire Wire Line
	4550 3350 4550 3450
Wire Wire Line
	3500 3350 2850 3350
Connection ~ 2850 3350
Wire Wire Line
	2850 3350 2850 3400
Text GLabel 6600 3550 2    50   Input ~ 0
R_µ
Wire Wire Line
	6600 3550 6200 3550
Connection ~ 6200 3550
Wire Wire Line
	6200 3550 6200 3950
Text GLabel 800  3350 0    50   Input ~ 0
L_µ
$Comp
L power:GND #PWR0105
U 1 1 5FAC2655
P 5350 1150
F 0 "#PWR0105" H 5350 900 50  0001 C CNN
F 1 "GND" H 5355 977 50  0000 C CNN
F 2 "" H 5350 1150 50  0001 C CNN
F 3 "" H 5350 1150 50  0001 C CNN
	1    5350 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 1050 5350 1050
Wire Wire Line
	5350 1050 5350 1150
$Comp
L power:VCC #PWR0106
U 1 1 5FAC4945
P 5350 850
F 0 "#PWR0106" H 5350 700 50  0001 C CNN
F 1 "VCC" H 5367 1023 50  0000 C CNN
F 2 "" H 5350 850 50  0001 C CNN
F 3 "" H 5350 850 50  0001 C CNN
	1    5350 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 850  5350 950 
Wire Wire Line
	5350 950  5200 950 
$Comp
L Zelfgemaakte_comp:Printkroon J2
U 1 1 5FAC6FCA
P 7250 3000
F 0 "J2" V 7025 2883 50  0000 C CNN
F 1 "Printkroon" V 7116 2883 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 7250 3000 50  0001 C CNN
F 3 "" H 7250 3000 50  0001 C CNN
	1    7250 3000
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0107
U 1 1 5FAC6FD0
P 7400 3200
F 0 "#PWR0107" H 7400 2950 50  0001 C CNN
F 1 "GND" H 7405 3027 50  0000 C CNN
F 2 "" H 7400 3200 50  0001 C CNN
F 3 "" H 7400 3200 50  0001 C CNN
	1    7400 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 3100 7400 3100
Wire Wire Line
	7400 3100 7400 3200
Wire Wire Line
	7400 2900 7400 3000
Wire Wire Line
	7400 3000 7250 3000
$Comp
L power:+12C #PWR0108
U 1 1 5FACA882
P 7400 2900
F 0 "#PWR0108" H 7400 2750 50  0001 C CNN
F 1 "+12C" H 7415 3073 50  0000 C CNN
F 2 "" H 7400 2900 50  0001 C CNN
F 3 "" H 7400 2900 50  0001 C CNN
	1    7400 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	8050 2050 8200 2050
Wire Wire Line
	8200 2050 8200 2150
Wire Wire Line
	8200 1850 8200 1950
Wire Wire Line
	8200 1950 8050 1950
Text GLabel 8200 1850 1    50   Input ~ 0
L_µ
Text GLabel 8200 2150 3    50   Input ~ 0
R_µ
Wire Wire Line
	8050 3100 8200 3100
Wire Wire Line
	8200 3100 8200 3200
Wire Wire Line
	8200 2900 8200 3000
Wire Wire Line
	8200 3000 8050 3000
Text GLabel 8200 2900 1    50   Input ~ 0
L
Text GLabel 8200 3200 3    50   Input ~ 0
R
$Comp
L Zelfgemaakte_comp:Printkroon J1
U 1 1 5FAEDF7F
P 5200 950
F 0 "J1" V 4975 833 50  0000 C CNN
F 1 "Printkroon" V 5066 833 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 5200 950 50  0001 C CNN
F 3 "" H 5200 950 50  0001 C CNN
	1    5200 950 
	0    1    1    0   
$EndComp
$Comp
L Zelfgemaakte_comp:Printkroon J3
U 1 1 5FAF2479
P 8050 1950
F 0 "J3" V 7825 1833 50  0000 C CNN
F 1 "Printkroon" V 7916 1833 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 8050 1950 50  0001 C CNN
F 3 "" H 8050 1950 50  0001 C CNN
	1    8050 1950
	0    1    1    0   
$EndComp
$Comp
L Zelfgemaakte_comp:Drukknop S2
U 1 1 5FAFDD2D
P 10050 1200
F 0 "S2" H 10000 1325 50  0000 C CNN
F 1 "Drukknop" H 10000 1234 50  0000 C CNN
F 2 "Zelfgemaakte_comp:Drukknop_smd" H 10050 1200 50  0001 C CNN
F 3 "" H 10050 1200 50  0001 C CNN
	1    10050 1200
	1    0    0    -1  
$EndComp
$Comp
L Zelfgemaakte_comp:Drukknop S3
U 1 1 5FAFE781
P 10050 1750
F 0 "S3" H 10000 1875 50  0000 C CNN
F 1 "Drukknop" H 10000 1784 50  0000 C CNN
F 2 "Zelfgemaakte_comp:Drukknop_smd" H 10050 1750 50  0001 C CNN
F 3 "" H 10050 1750 50  0001 C CNN
	1    10050 1750
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0109
U 1 1 5FB006A1
P 9100 950
F 0 "#PWR0109" H 9100 800 50  0001 C CNN
F 1 "VCC" H 9117 1123 50  0000 C CNN
F 2 "" H 9100 950 50  0001 C CNN
F 3 "" H 9100 950 50  0001 C CNN
	1    9100 950 
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9100 950  9100 1300
$Comp
L Device:R R3
U 1 1 5FB0C6B6
P 9450 1300
F 0 "R3" V 9243 1300 50  0000 C CNN
F 1 "4K7" V 9334 1300 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 9380 1300 50  0001 C CNN
F 3 "~" H 9450 1300 50  0001 C CNN
	1    9450 1300
	0    -1   1    0   
$EndComp
$Comp
L Device:R R4
U 1 1 5FB0E7FD
P 9450 1850
F 0 "R4" V 9243 1850 50  0000 C CNN
F 1 "4K7" V 9334 1850 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 9380 1850 50  0001 C CNN
F 3 "~" H 9450 1850 50  0001 C CNN
	1    9450 1850
	0    -1   1    0   
$EndComp
Wire Wire Line
	9300 1300 9100 1300
Connection ~ 9100 1300
Wire Wire Line
	9100 1300 9100 1850
Wire Wire Line
	9300 1850 9100 1850
Wire Wire Line
	9600 1300 9700 1300
Wire Wire Line
	9600 1850 9700 1850
$Comp
L power:GND #PWR0110
U 1 1 5FB299FF
P 10550 2150
F 0 "#PWR0110" H 10550 1900 50  0001 C CNN
F 1 "GND" H 10555 1977 50  0000 C CNN
F 2 "" H 10550 2150 50  0001 C CNN
F 3 "" H 10550 2150 50  0001 C CNN
	1    10550 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	10200 1950 10550 1950
Wire Wire Line
	10550 1950 10550 2150
Wire Wire Line
	10200 1400 10550 1400
Wire Wire Line
	10550 1400 10550 1950
Connection ~ 10550 1950
Text GLabel 9700 1050 1    50   Input ~ 0
D1
Text GLabel 9700 2100 3    50   Input ~ 0
D2
Wire Wire Line
	9700 2100 9700 1850
Connection ~ 9700 1850
Wire Wire Line
	9700 1850 9800 1850
Wire Wire Line
	9700 1300 9700 1050
Connection ~ 9700 1300
Wire Wire Line
	9700 1300 9800 1300
Wire Wire Line
	8750 2650 8900 2650
Wire Wire Line
	8900 2650 8900 2750
Wire Wire Line
	8900 2450 8900 2550
Wire Wire Line
	8900 2550 8750 2550
Text GLabel 8900 2450 1    50   Input ~ 0
D1
Text GLabel 8900 2750 3    50   Input ~ 0
D2
$Comp
L Zelfgemaakte_comp:Printkroon J5
U 1 1 5FB4A1A4
P 8750 2550
F 0 "J5" V 8525 2433 50  0000 C CNN
F 1 "Printkroon" V 8616 2433 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 8750 2550 50  0001 C CNN
F 3 "" H 8750 2550 50  0001 C CNN
	1    8750 2550
	0    1    1    0   
$EndComp
Wire Wire Line
	1250 2700 1250 3400
Wire Wire Line
	800  3350 1150 3350
Connection ~ 1150 3350
Wire Wire Line
	1150 3350 1150 3950
Wire Wire Line
	8350 1150 8500 1150
Wire Wire Line
	8500 1150 8500 1250
Wire Wire Line
	8500 950  8500 1050
Wire Wire Line
	8500 1050 8350 1050
Text GLabel 8500 950  1    50   Input ~ 0
Sol+
Text GLabel 8500 1250 3    50   Input ~ 0
Sol-
$Comp
L Zelfgemaakte_comp:Printkroon J6
U 1 1 5FAC5DE1
P 8350 1050
F 0 "J6" V 8125 933 50  0000 C CNN
F 1 "Printkroon" V 8216 933 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 8350 1050 50  0001 C CNN
F 3 "" H 8350 1050 50  0001 C CNN
	1    8350 1050
	0    1    1    0   
$EndComp
Wire Wire Line
	7700 1100 7850 1100
Wire Wire Line
	7850 900  7850 1000
Wire Wire Line
	7850 1000 7700 1000
Text GLabel 7850 900  1    50   Input ~ 0
Sol
$Comp
L Zelfgemaakte_comp:Printkroon J7
U 1 1 5FAF0B62
P 7700 1000
F 0 "J7" V 7475 883 50  0000 C CNN
F 1 "Printkroon" V 7566 883 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 7700 1000 50  0001 C CNN
F 3 "" H 7700 1000 50  0001 C CNN
	1    7700 1000
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0113
U 1 1 5FAF44FC
P 7850 1300
F 0 "#PWR0113" H 7850 1050 50  0001 C CNN
F 1 "GND" H 7855 1127 50  0000 C CNN
F 2 "" H 7850 1300 50  0001 C CNN
F 3 "" H 7850 1300 50  0001 C CNN
	1    7850 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7850 1100 7850 1300
$Comp
L Transistor_FET:IRF540N Q5
U 1 1 602C58A1
P 7150 5400
F 0 "Q5" H 7355 5446 50  0000 L CNN
F 1 "IRF540N" H 7355 5355 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 7400 5325 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 7150 5400 50  0001 L CNN
	1    7150 5400
	1    0    0    -1  
$EndComp
$Comp
L power:+12C #PWR0111
U 1 1 602C58A7
P 7250 4400
F 0 "#PWR0111" H 7250 4250 50  0001 C CNN
F 1 "+12C" H 7265 4573 50  0000 C CNN
F 2 "" H 7250 4400 50  0001 C CNN
F 3 "" H 7250 4400 50  0001 C CNN
	1    7250 4400
	1    0    0    -1  
$EndComp
Text GLabel 7250 4500 3    50   Output ~ 0
Sol+
Wire Wire Line
	7250 4400 7250 4450
Text GLabel 7250 5000 1    50   Output ~ 0
Sol-
Wire Wire Line
	7250 5000 7250 5100
$Comp
L Diode:1N4148 D3
U 1 1 602C58B1
P 7650 4750
F 0 "D3" V 7696 4671 50  0000 R CNN
F 1 "1N4148" V 7605 4671 50  0000 R CNN
F 2 "Diode_SMD:D_SOD-123" H 7650 4575 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf" H 7650 4750 50  0001 C CNN
	1    7650 4750
	0    1    1    0   
$EndComp
Wire Wire Line
	7650 4600 7650 4450
Wire Wire Line
	7650 4450 7250 4450
Connection ~ 7250 4450
Wire Wire Line
	7250 4450 7250 4500
Wire Wire Line
	7650 4900 7650 5100
Wire Wire Line
	7650 5100 7250 5100
Connection ~ 7250 5100
Wire Wire Line
	7250 5100 7250 5200
$Comp
L power:GND #PWR0112
U 1 1 602C58BF
P 7250 5800
F 0 "#PWR0112" H 7250 5550 50  0001 C CNN
F 1 "GND" H 7255 5627 50  0000 C CNN
F 2 "" H 7250 5800 50  0001 C CNN
F 3 "" H 7250 5800 50  0001 C CNN
	1    7250 5800
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 5600 7250 5750
Text GLabel 6500 5400 0    50   Input ~ 0
Sol
Wire Wire Line
	6950 5400 6900 5400
$Comp
L power:GND #PWR0114
U 1 1 602E4D48
P 10050 5700
F 0 "#PWR0114" H 10050 5450 50  0001 C CNN
F 1 "GND" H 10055 5527 50  0000 C CNN
F 2 "" H 10050 5700 50  0001 C CNN
F 3 "" H 10050 5700 50  0001 C CNN
	1    10050 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 5400 9200 5500
$Comp
L Device:R R6
U 1 1 602EA70D
P 8650 5200
F 0 "R6" V 8443 5200 50  0000 C CNN
F 1 "4K7" V 8534 5200 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 8580 5200 50  0001 C CNN
F 3 "~" H 8650 5200 50  0001 C CNN
	1    8650 5200
	0    -1   1    0   
$EndComp
Wire Wire Line
	8900 5200 8800 5200
Wire Wire Line
	9200 4750 9200 4900
$Comp
L power:+12C #PWR0115
U 1 1 602FDB4D
P 9200 3900
F 0 "#PWR0115" H 9200 3750 50  0001 C CNN
F 1 "+12C" H 9215 4073 50  0000 C CNN
F 2 "" H 9200 3900 50  0001 C CNN
F 3 "" H 9200 3900 50  0001 C CNN
	1    9200 3900
	1    0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRF540N Q6
U 1 1 60303E12
P 9950 5150
F 0 "Q6" H 10155 5196 50  0000 L CNN
F 1 "IRF540N" H 10155 5105 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 10200 5075 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 9950 5150 50  0001 L CNN
	1    9950 5150
	1    0    0    -1  
$EndComp
$Comp
L Transistor_FET:IRF4905 Q7
U 1 1 6030AF9D
P 9950 4700
F 0 "Q7" H 10155 4654 50  0000 L CNN
F 1 "IRF4905" H 10155 4745 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 10150 4625 50  0001 L CIN
F 3 "http://www.infineon.com/dgdl/irf4905.pdf?fileId=5546d462533600a4015355e32165197c" H 9950 4700 50  0001 L CNN
	1    9950 4700
	1    0    0    1   
$EndComp
Wire Wire Line
	9750 4700 9750 4900
Wire Wire Line
	9750 4900 9200 4900
Connection ~ 9750 4900
Wire Wire Line
	9750 4900 9750 5150
Connection ~ 9200 4900
Wire Wire Line
	9200 4900 9200 5000
Wire Wire Line
	10050 4900 10050 4950
Wire Wire Line
	10050 4500 10050 4150
Wire Wire Line
	10050 4150 9200 4150
Wire Wire Line
	9200 4150 9200 3900
Wire Wire Line
	9200 4150 9200 4450
Connection ~ 9200 4150
Wire Wire Line
	10050 5350 10050 5500
Wire Wire Line
	9200 5500 10050 5500
Connection ~ 10050 5500
Wire Wire Line
	10050 5500 10050 5700
Wire Wire Line
	10850 5150 10700 5150
Wire Wire Line
	10700 4950 10700 5050
Wire Wire Line
	10700 5050 10850 5050
$Comp
L Zelfgemaakte_comp:Printkroon J9
U 1 1 603504B4
P 10850 5050
F 0 "J9" V 10625 4933 50  0000 C CNN
F 1 "Printkroon" V 10716 4933 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 10850 5050 50  0001 C CNN
F 3 "" H 10850 5050 50  0001 C CNN
	1    10850 5050
	0    -1   1    0   
$EndComp
Wire Wire Line
	10700 4950 10050 4950
Connection ~ 10050 4950
Wire Wire Line
	10700 5500 10050 5500
Wire Wire Line
	10700 5150 10700 5500
Text Notes 10600 4600 0    50   ~ 0
Buzzer\n
$Comp
L Transistor_BJT:BC547 Q10
U 1 1 60371169
P 9100 5200
F 0 "Q10" H 9291 5246 50  0000 L CNN
F 1 "BC547" H 9291 5155 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 9300 5125 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 9100 5200 50  0001 L CNN
	1    9100 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 602F40B3
P 9200 4600
F 0 "R7" V 8993 4600 50  0000 C CNN
F 1 "4K7" V 9084 4600 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 9130 4600 50  0001 C CNN
F 3 "~" H 9200 4600 50  0001 C CNN
	1    9200 4600
	-1   0    0    -1  
$EndComp
Wire Wire Line
	9800 3050 9950 3050
Wire Wire Line
	9950 2850 9950 2950
Wire Wire Line
	9950 2950 9800 2950
Text GLabel 9950 2850 1    50   Input ~ 0
buz
$Comp
L Zelfgemaakte_comp:Printkroon J8
U 1 1 6038C5A1
P 9800 2950
F 0 "J8" V 9575 2833 50  0000 C CNN
F 1 "Printkroon" V 9666 2833 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 9800 2950 50  0001 C CNN
F 3 "" H 9800 2950 50  0001 C CNN
	1    9800 2950
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0116
U 1 1 6038C5A7
P 9950 3250
F 0 "#PWR0116" H 9950 3000 50  0001 C CNN
F 1 "GND" H 9955 3077 50  0000 C CNN
F 2 "" H 9950 3250 50  0001 C CNN
F 3 "" H 9950 3250 50  0001 C CNN
	1    9950 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	9950 3050 9950 3250
Text GLabel 8500 5200 0    50   Input ~ 0
buz
$Comp
L Connector:Conn_01x08_Female J10
U 1 1 603CD993
P 6200 4800
F 0 "J10" H 6228 4776 50  0000 L CNN
F 1 "Conn_01x08_Female" H 6228 4685 50  0000 L CNN
F 2 "Connector_PinHeader_1.00mm:PinHeader_1x08_P1.00mm_Vertical" H 6200 4800 50  0001 C CNN
F 3 "~" H 6200 4800 50  0001 C CNN
	1    6200 4800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 603CFA82
P 5800 4400
F 0 "#PWR0103" H 5800 4150 50  0001 C CNN
F 1 "GND" H 5805 4227 50  0000 C CNN
F 2 "" H 5800 4400 50  0001 C CNN
F 3 "" H 5800 4400 50  0001 C CNN
	1    5800 4400
	-1   0    0    1   
$EndComp
Wire Wire Line
	6000 4500 5800 4500
Wire Wire Line
	5800 4500 5800 4400
$Comp
L Device:R R11
U 1 1 603D4A14
P 6900 5600
F 0 "R11" V 6693 5600 50  0000 C CNN
F 1 "1M" V 6784 5600 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 6830 5600 50  0001 C CNN
F 3 "~" H 6900 5600 50  0001 C CNN
	1    6900 5600
	1    0    0    1   
$EndComp
Wire Wire Line
	6900 5450 6900 5400
Connection ~ 6900 5400
Wire Wire Line
	6900 5400 6500 5400
Wire Wire Line
	6900 5750 7250 5750
Connection ~ 7250 5750
Wire Wire Line
	7250 5750 7250 5800
$Comp
L power:VCC #PWR0104
U 1 1 603E1764
P 5550 4400
F 0 "#PWR0104" H 5550 4250 50  0001 C CNN
F 1 "VCC" H 5567 4573 50  0000 C CNN
F 2 "" H 5550 4400 50  0001 C CNN
F 3 "" H 5550 4400 50  0001 C CNN
	1    5550 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4600 5550 4600
Wire Wire Line
	5550 4600 5550 4400
$Comp
L Device:R R8
U 1 1 603E6B22
P 5700 5400
F 0 "R8" V 5493 5400 50  0000 C CNN
F 1 "4K7" V 5584 5400 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 5630 5400 50  0001 C CNN
F 3 "~" H 5700 5400 50  0001 C CNN
	1    5700 5400
	1    0    0    1   
$EndComp
$Comp
L Device:R R5
U 1 1 603EB3CB
P 5350 5400
F 0 "R5" V 5143 5400 50  0000 C CNN
F 1 "4K7" V 5234 5400 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric" V 5280 5400 50  0001 C CNN
F 3 "~" H 5350 5400 50  0001 C CNN
	1    5350 5400
	1    0    0    1   
$EndComp
$Comp
L power:VCC #PWR0117
U 1 1 603EFAF1
P 5500 5750
F 0 "#PWR0117" H 5500 5600 50  0001 C CNN
F 1 "VCC" H 5518 5923 50  0000 C CNN
F 2 "" H 5500 5750 50  0001 C CNN
F 3 "" H 5500 5750 50  0001 C CNN
	1    5500 5750
	-1   0    0    1   
$EndComp
Wire Wire Line
	5700 5550 5500 5550
Wire Wire Line
	5500 5550 5500 5750
Wire Wire Line
	5500 5550 5350 5550
Connection ~ 5500 5550
Wire Wire Line
	6000 5200 5700 5200
Wire Wire Line
	5700 5200 5700 5250
Wire Wire Line
	6000 5100 5350 5100
Wire Wire Line
	5350 5100 5350 5250
$Comp
L Connector:Conn_01x06_Male J11
U 1 1 6040599F
P 4650 4900
F 0 "J11" H 4758 5281 50  0000 C CNN
F 1 "Conn_01x06_Male" H 4758 5190 50  0000 C CNN
F 2 "Connector_PinHeader_1.00mm:PinHeader_1x06_P1.00mm_Vertical" H 4650 4900 50  0001 C CNN
F 3 "~" H 4650 4900 50  0001 C CNN
	1    4650 4900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4700 4850 4700
Wire Wire Line
	6000 4800 4850 4800
Wire Wire Line
	6000 4900 4850 4900
Wire Wire Line
	6000 5000 4850 5000
Wire Wire Line
	5350 5100 4850 5100
Connection ~ 5350 5100
Wire Wire Line
	5700 5200 4850 5200
Connection ~ 5700 5200
$Comp
L Zelfgemaakte_comp:Printkroon J4
U 1 1 5FAF4637
P 8050 3000
F 0 "J4" V 7825 2883 50  0000 C CNN
F 1 "Printkroon" V 7916 2883 50  0000 C CNN
F 2 "Connector_Wire:SolderWirePad_1x02_P5.08mm_Drill1.5mm" H 8050 3000 50  0001 C CNN
F 3 "" H 8050 3000 50  0001 C CNN
	1    8050 3000
	0    1    1    0   
$EndComp
$EndSCHEMATC
