#ifndef _Seven_Seg_PRIVATE_H_
#define _Seven_Seg_PRIVATE_H_


#define ON							 1
#define OFF							 0

#define Yes							 1
#define No							 0

#define H							 1
#define L							 0

#define ANODE							 1
#define CATHODE							 0

#define Not_Available				-1

#define A							51
#define B							52
#define C							53
#define D							54

#if Seven_Seg_TYPE==CATHODE

	#define Sig_ON						HIGH
	#define Com_ON						LOW
	#define Sig_OFF						LOW
	#define Com_OFF						HIGH

#elif Seven_Seg_TYPE==ANODE

	#define Sig_ON						LOW
	#define Com_ON						HIGH
	#define Sig_OFF						HIGH
	#define Com_OFF						LOW

#endif


#if Seven_Seg_Decoder==Yes

	#define Seg_A						0
	#define Seg_B						0
	#define Seg_C 						0
	#define Seg_D 						0
	#define Seg_E						0
	#define Seg_F						0
	#define Seg_G						0
	#define Seg_DP   					0

	#if Seven_Seg_Port_Nib==L

			#if Seven_Seg_PORT==A

				#define Dec_A						DIO_PIN0
				#define Dec_B						DIO_PIN1
				#define Dec_C 						DIO_PIN2
				#define Dec_D 						DIO_PIN3

			#elif Seven_Seg_PORT==B

				#define Dec_A						DIO_PIN8
				#define Dec_B						DIO_PIN9
				#define Dec_C 						DIO_PIN10
				#define Dec_D 						DIO_PIN11

			#elif Seven_Seg_PORT==C

				#define Dec_A						DIO_PIN16
				#define Dec_B						DIO_PIN17
				#define Dec_C 						DIO_PIN18
				#define Dec_D 						DIO_PIN19

			#elif Seven_Seg_PORT==D

				#define Dec_A						DIO_PIN24
				#define Dec_B						DIO_PIN25
				#define Dec_C 						DIO_PIN26
				#define Dec_D 						DIO_PIN27

			#endif

	#elif Seven_Seg_Port_Nib==H

			#if Seven_Seg_PORT==A

				#define Dec_A						DIO_PIN4
				#define Dec_B						DIO_PIN5
				#define Dec_C 						DIO_PIN6
				#define Dec_D 						DIO_PIN7

			#elif Seven_Seg_PORT==B

				#define Dec_A						DIO_PIN12
				#define Dec_B						DIO_PIN13
				#define Dec_C 						DIO_PIN14
				#define Dec_D 						DIO_PIN15

			#elif Seven_Seg_PORT==C

				#define Dec_A						DIO_PIN20
				#define Dec_B						DIO_PIN21
				#define Dec_C 						DIO_PIN22
				#define Dec_D 						DIO_PIN23

			#elif Seven_Seg_PORT==D

				#define Dec_A						DIO_PIN28
				#define Dec_B						DIO_PIN29
				#define Dec_C 						DIO_PIN30
				#define Dec_D 						DIO_PIN31
			#endif

	#endif


#elif Seven_Seg_Decoder==No

	#define Dec_A						0
	#define Dec_B						0
	#define Dec_C 						0
	#define Dec_D 						0

	#if Seven_Seg_PORT==A

		#define Seg_A						DIO_PIN0
		#define Seg_B						DIO_PIN1
		#define Seg_C 						DIO_PIN2
		#define Seg_D 						DIO_PIN3
		#define Seg_E						DIO_PIN4
		#define Seg_F						DIO_PIN5
		#define Seg_G						DIO_PIN6
		#define Seg_DP   					DIO_PIN7

	#elif Seven_Seg_PORT==B

		#define Seg_A						DIO_PIN8
		#define Seg_B						DIO_PIN9
		#define Seg_C 						DIO_PIN10
		#define Seg_D 						DIO_PIN11
		#define Seg_E						DIO_PIN12
		#define Seg_F						DIO_PIN13
		#define Seg_G						DIO_PIN14
		#define Seg_DP   					DIO_PIN15

	#elif Seven_Seg_PORT==C

		#define Seg_A						DIO_PIN16
		#define Seg_B						DIO_PIN17
		#define Seg_C 						DIO_PIN18
		#define Seg_D 						DIO_PIN19
		#define Seg_E						DIO_PIN20
		#define Seg_F						DIO_PIN21
		#define Seg_G						DIO_PIN22
		#define Seg_DP   					DIO_PIN23

	#elif Seven_Seg_PORT==D

		#define Seg_A						DIO_PIN24
		#define Seg_B						DIO_PIN25
		#define Seg_C 						DIO_PIN26
		#define Seg_D 						DIO_PIN27
		#define Seg_E						DIO_PIN28
		#define Seg_F						DIO_PIN29
		#define Seg_G						DIO_PIN30
		#define Seg_DP   					DIO_PIN31

	#endif

#endif



#endif // _Seven_Seg_PRIVATE_H_
