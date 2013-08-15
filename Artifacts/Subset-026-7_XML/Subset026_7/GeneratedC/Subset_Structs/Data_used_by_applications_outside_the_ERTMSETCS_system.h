#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>

struct DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszust�nde  
  } info;

  struct 
 { 
// TransmissionMedia=Any
// Messages between trackside and on-board devices, which contain information used by applications outside the ERTMS/ETCS system.
// Packet Number = 44

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t NID_XUSER;                              			// # 9		// if (NID_XUSER == 102)
	uint32_t NID_NTC;                                			// # 8		// Only if NID_XUSER = 102 (National System functions)
	uint32_t Other_data_depending_on__NID_XUSER;     			// # 	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system T_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system* TP_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system  oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system  oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system = new(T_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system->...
// maybe : memset(oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system));
// for complete 0 content.

#endif

