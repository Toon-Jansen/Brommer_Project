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
$Comp
L Relay:DIPxx-1Cxx-51x K1
U 1 1 6039E01C
P 5495 4245
F 0 "K1" V 6062 4245 50  0000 C CNN
F 1 "DIPxx-1Cxx-51x" V 5971 4245 50  0000 C CNN
F 2 "Relay_THT:Relay_SPDT_Schrack-RT1-16A-FormC_RM5mm" H 5945 4195 50  0001 L CNN
F 3 "" H 5495 4245 50  0001 C CNN
	1    5495 4245
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_DGS Q1
U 1 1 6039E023
P 5195 5145
F 0 "Q1" H 5400 5099 50  0000 L CNN
F 1 "Q_NMOS_DGS" H 5400 5190 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-363_SC-70-6" H 5395 5245 50  0001 C CNN
F 3 "~" H 5195 5145 50  0001 C CNN
	1    5195 5145
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_NMOS_DGS Q2
U 1 1 6039E029
P 6845 4945
F 0 "Q2" H 7050 4899 50  0000 L CNN
F 1 "Q_NMOS_DGS" H 7050 4990 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-363_SC-70-6" H 7045 5045 50  0001 C CNN
F 3 "~" H 6845 4945 50  0001 C CNN
	1    6845 4945
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 6039E03F
P 6595 5270
F 0 "R2" H 6665 5316 50  0000 L CNN
F 1 "1M" H 6665 5225 50  0000 L CNN
F 2 "Resistor_SMD:R_1210_3225Metric" V 6525 5270 50  0001 C CNN
F 3 "~" H 6595 5270 50  0001 C CNN
	1    6595 5270
	1    0    0    -1  
$EndComp
Text GLabel 5280 3710 0    50   Input ~ 0
12V
$Comp
L Simulation_SPICE:DIODE D1
U 1 1 6039E05C
P 6030 5160
F 0 "D1" V 6076 5080 50  0000 R CNN
F 1 "DIODE" V 5985 5080 50  0000 R CNN
F 2 "Diode_SMD:D_SOD-123" H 6030 5160 50  0001 C CNN
F 3 "~" H 6030 5160 50  0001 C CNN
F 4 "Y" H 6030 5160 50  0001 L CNN "Spice_Netlist_Enabled"
F 5 "V" H 6030 5160 50  0001 L CNN "Spice_Primitive"
	1    6030 5160
	0    1    -1   0   
$EndComp
Wire Wire Line
	6595 5120 6595 4945
Wire Wire Line
	6595 4945 6645 4945
Wire Wire Line
	5295 4945 6030 4945
Wire Wire Line
	6030 4945 6030 5010
Connection ~ 6030 4945
Connection ~ 6595 4945
Wire Wire Line
	5295 4945 5295 4545
Connection ~ 5295 4945
Wire Wire Line
	4995 5145 4995 5235
$Comp
L Device:R R1
U 1 1 6039E039
P 4995 5385
F 0 "R1" H 5065 5431 50  0000 L CNN
F 1 "1M" H 5065 5340 50  0000 L CNN
F 2 "Resistor_SMD:R_1210_3225Metric" V 4925 5385 50  0001 C CNN
F 3 "~" H 4995 5385 50  0001 C CNN
	1    4995 5385
	1    0    0    -1  
$EndComp
Wire Wire Line
	6945 4745 7730 4745
Wire Wire Line
	7730 4745 7730 4775
$Comp
L Connector:Conn_01x04_Female JMoter1
U 1 1 603C1C82
P 8235 2495
F 0 "JMoter1" H 8263 2471 50  0000 L CNN
F 1 "Conn_01x04_Female" H 8263 2380 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 8235 2495 50  0001 C CNN
F 3 "~" H 8235 2495 50  0001 C CNN
	1    8235 2495
	1    0    0    -1  
$EndComp
Text GLabel 8385 4745 2    50   Input ~ 0
kill+
$Comp
L power:Earth #PWR0101
U 1 1 603C48E2
P 4995 5585
F 0 "#PWR0101" H 4995 5335 50  0001 C CNN
F 1 "Earth" H 4995 5435 50  0001 C CNN
F 2 "" H 4995 5585 50  0001 C CNN
F 3 "~" H 4995 5585 50  0001 C CNN
	1    4995 5585
	1    0    0    -1  
$EndComp
Wire Wire Line
	4995 5585 4995 5535
$Comp
L power:Earth #PWR0102
U 1 1 603C9E1E
P 5295 5395
F 0 "#PWR0102" H 5295 5145 50  0001 C CNN
F 1 "Earth" H 5295 5245 50  0001 C CNN
F 2 "" H 5295 5395 50  0001 C CNN
F 3 "~" H 5295 5395 50  0001 C CNN
	1    5295 5395
	1    0    0    -1  
$EndComp
Wire Wire Line
	5295 5395 5295 5345
$Comp
L power:Earth #PWR0103
U 1 1 603CAF0F
P 6595 5470
F 0 "#PWR0103" H 6595 5220 50  0001 C CNN
F 1 "Earth" H 6595 5320 50  0001 C CNN
F 2 "" H 6595 5470 50  0001 C CNN
F 3 "~" H 6595 5470 50  0001 C CNN
	1    6595 5470
	1    0    0    -1  
$EndComp
Wire Wire Line
	6595 5470 6595 5420
Connection ~ 7730 4745
Text GLabel 5795 3855 2    50   Input ~ 0
motor+
Text GLabel 5695 4630 2    50   Input ~ 0
motor-
Wire Wire Line
	5795 3945 5795 3855
Wire Wire Line
	5695 4545 5695 4630
$Comp
L power:Earth #PWR0104
U 1 1 603DB9D5
P 6030 5360
F 0 "#PWR0104" H 6030 5110 50  0001 C CNN
F 1 "Earth" H 6030 5210 50  0001 C CNN
F 2 "" H 6030 5360 50  0001 C CNN
F 3 "~" H 6030 5360 50  0001 C CNN
	1    6030 5360
	1    0    0    -1  
$EndComp
Wire Wire Line
	6030 5360 6030 5310
Wire Wire Line
	5295 3945 5295 3710
Wire Wire Line
	5295 3710 5280 3710
Text GLabel 7980 2395 0    50   Input ~ 0
motor+
Wire Wire Line
	7980 2395 8035 2395
Text GLabel 7980 2495 0    50   Input ~ 0
motor-
Wire Wire Line
	7980 2495 8035 2495
Text GLabel 7980 2595 0    50   Input ~ 0
kill+
Wire Wire Line
	7980 2595 8035 2595
Text GLabel 7980 2695 0    50   Input ~ 0
kill-
Wire Wire Line
	7980 2695 8035 2695
$Comp
L Device:R R3
U 1 1 603B1637
P 8280 5020
F 0 "R3" H 8350 5066 50  0000 L CNN
F 1 "1M" H 8350 4975 50  0000 L CNN
F 2 "Resistor_SMD:R_1210_3225Metric" V 8210 5020 50  0001 C CNN
F 3 "~" H 8280 5020 50  0001 C CNN
	1    8280 5020
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Zener D3
U 1 1 603B213B
P 8280 5420
F 0 "D3" V 8234 5499 50  0000 L CNN
F 1 "D_Zener_3V" V 8325 5499 50  0000 L CNN
F 2 "Diode_SMD:D_SOD-523" H 8280 5420 50  0001 C CNN
F 3 "~" H 8280 5420 50  0001 C CNN
	1    8280 5420
	0    1    1    0   
$EndComp
Wire Wire Line
	8280 5620 8280 5570
Wire Wire Line
	8280 5270 8280 5220
Wire Wire Line
	8280 4870 8280 4745
Text GLabel 8370 5220 2    50   Input ~ 0
Motor-On
Wire Wire Line
	8370 5220 8280 5220
Connection ~ 8280 5220
Wire Wire Line
	8280 5220 8280 5170
$Comp
L Simulation_SPICE:DIODE D2
U 1 1 6039E064
P 7730 4925
F 0 "D2" V 7776 4845 50  0000 R CNN
F 1 "DIODE" V 7685 4845 50  0000 R CNN
F 2 "Diode_SMD:D_SOD-123" H 7730 4925 50  0001 C CNN
F 3 "~" H 7730 4925 50  0001 C CNN
F 4 "Y" H 7730 4925 50  0001 L CNN "Spice_Netlist_Enabled"
F 5 "V" H 7730 4925 50  0001 L CNN "Spice_Primitive"
	1    7730 4925
	0    -1   -1   0   
$EndComp
Text GLabel 8385 5620 2    50   Input ~ 0
kill-
Wire Wire Line
	7730 4745 8280 4745
Wire Wire Line
	8280 4745 8385 4745
Connection ~ 8280 4745
Wire Wire Line
	8280 5620 8385 5620
Wire Wire Line
	7730 5075 7730 5620
Wire Wire Line
	7730 5620 8280 5620
Connection ~ 8280 5620
Wire Wire Line
	7730 5620 6945 5620
Wire Wire Line
	6945 5145 6945 5620
Connection ~ 7730 5620
Wire Wire Line
	6030 4945 6595 4945
Wire Wire Line
	4995 5145 4905 5145
Connection ~ 4995 5145
Text GLabel 4905 5145 0    50   Input ~ 0
moter_ON_OFF
Text GLabel 8005 920  0    50   Input ~ 0
3.3v
$Comp
L Connector:Conn_01x04_Female Jsleutelcontact1
U 1 1 603DA91D
P 8205 1550
F 0 "Jsleutelcontact1" H 8233 1526 50  0000 L CNN
F 1 "Conn_01x04_Female" H 8233 1435 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 8205 1550 50  0001 C CNN
F 3 "~" H 8205 1550 50  0001 C CNN
	1    8205 1550
	1    0    0    -1  
$EndComp
Text GLabel 7945 1550 0    50   Input ~ 0
Sleutelcontact-
Wire Wire Line
	7945 1550 8005 1550
Text GLabel 1975 4640 2    50   Input ~ 0
12V
$Comp
L Connector:Conn_01x06_Male J1
U 1 1 603DECF4
P 1710 4840
F 0 "J1" H 1818 5221 50  0000 C CNN
F 1 "Conn_01x06_Male" H 1818 5130 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Horizontal" H 1710 4840 50  0001 C CNN
F 3 "~" H 1710 4840 50  0001 C CNN
	1    1710 4840
	1    0    0    -1  
$EndComp
Text GLabel 1975 4740 2    50   Input ~ 0
3.3v
$Comp
L power:Earth #PWR0105
U 1 1 603E2016
P 2725 4870
F 0 "#PWR0105" H 2725 4620 50  0001 C CNN
F 1 "Earth" H 2725 4720 50  0001 C CNN
F 2 "" H 2725 4870 50  0001 C CNN
F 3 "~" H 2725 4870 50  0001 C CNN
	1    2725 4870
	1    0    0    -1  
$EndComp
Text GLabel 1975 5140 2    50   Input ~ 0
Motor-On
Text GLabel 1975 5040 2    50   Input ~ 0
Sleutelcontact-
Text GLabel 1975 4940 2    50   Input ~ 0
moter_ON_OFF
Wire Wire Line
	1910 4640 1975 4640
Wire Wire Line
	1910 4740 1975 4740
Wire Wire Line
	1910 4940 1975 4940
Wire Wire Line
	1910 5040 1975 5040
Wire Wire Line
	1910 5140 1975 5140
Wire Wire Line
	2725 4840 2725 4870
Wire Wire Line
	1910 4840 2725 4840
$Comp
L Connector:Conn_01x02_Female J4
U 1 1 603EF641
P 8205 1160
F 0 "J4" H 8233 1136 50  0000 L CNN
F 1 "Conn_01x02_Female" H 8233 1045 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 8205 1160 50  0001 C CNN
F 3 "~" H 8205 1160 50  0001 C CNN
	1    8205 1160
	1    0    0    -1  
$EndComp
Wire Wire Line
	8005 920  8005 1160
Wire Wire Line
	8005 1260 8005 1450
$EndSCHEMATC
