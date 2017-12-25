Underwater_SealedChamber_MapScripts:: @ 82390C4
	map_script 6, Underwater_SealedChamber_MapScript1_2390CA
	.byte 0

Underwater_SealedChamber_MapScript1_2390CA: @ 82390CA
	getplayerxy VAR_0x8004, VAR_0x8005
	compare VAR_0x8004, 12
	goto_if 5, Underwater_SealedChamber_EventScript_2390EA
	compare VAR_0x8005, 44
	goto_if 5, Underwater_SealedChamber_EventScript_2390EA
	goto Underwater_SealedChamber_EventScript_2390F3

Underwater_SealedChamber_EventScript_2390EA:: @ 82390EA
	setdivewarp ROUTE_134, 255, 60, 31
	end

Underwater_SealedChamber_EventScript_2390F3:: @ 82390F3
	setdivewarp SEALED_CHAMBER_OUTER_ROOM, 255, 10, 19
	end

Underwater_SealedChamber_EventScript_2390FC:: @ 82390FC
	lockall
	braillemessage Underwater_SealedChamber_Braille_2A6B15
	waitbuttonpress
	hidebox2
	releaseall
	end
