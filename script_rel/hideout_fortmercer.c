#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	struct<5> Local_15 = { 0, 0, 0, 0, 0 } ;
	struct<216> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	struct<9> Local_244[17];
	struct<9> Local_398[4];
	struct<9> Local_435[4];
	struct<14> Local_472[2];
	struct<9> Local_501[4];
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 1;
	var uLocal_543 = 0;
	char* sLocal_544[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_588[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	bool bLocal_603 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_602 = vScriptParam_0.x;
	iLocal_600 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_601)
		{
			iLocal_601 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_600;
			func_4(iLocal_602, &iLocal_600);
			switch (iLocal_600)
			{
				case 0:
					if (!Global_1879534->f_1)
					{
						bLocal_603 = !func_5(iLocal_602, 1);
						if (bLocal_603)
						{
						}
						iLocal_600 = 1;
					}
					break;
				case 1:
					iLocal_600 = 2;
					break;
				case 2:
					if (func_6(bLocal_603))
					{
						iLocal_600 = 4;
					}
					break;
				case 4:
					iLocal_600 = 6;
					break;
				case 6:
					if (func_7(iLocal_602, -1, -1, 0))
					{
						func_8(iLocal_602, 4);
						iLocal_600 = 7;
					}
					break;
				case 7:
					iLocal_600 = 8;
					break;
				case 8:
					func_9(iLocal_602);
					iLocal_600 = 9;
					break;
				case 9:
					if (iLocal_602 != 5)
					{
						func_10(Global_1898004);
						func_11(iLocal_602, Global_1898004, bLocal_603);
					}
					func_8(iLocal_602, 8);
					iLocal_600 = 10;
					break;
				case 10:
					if (!bLocal_603)
					{
						func_12();
						if (func_13(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							func_14(32);
						}
						iLocal_600 = 3;
					}
					else
					{
						iLocal_600 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (func_15(bLocal_603))
						{
							iLocal_600 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_603)
					{
						if (!func_16(iLocal_602))
						{
							iLocal_601 = 0;
						}
					}
					func_17(Global_1898004, iLocal_602);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_600)
			{
				iLocal_601 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

int func_1(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

int func_3()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_13(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_14(16);
		return;
	}
	if (!func_20(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_14(16);
		return;
	}
	if (func_21(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_22(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_22(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_22(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_22(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_22(1);
			*iParam1 = 11;
			return;
		}
	}
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_24() == -1)
	{
		if (func_25(6206, 1, 1))
		{
			iVar0 = func_26(0);
			iVar1 = func_27(iVar0);
			return 0;
		}
		if (bParam1)
		{
			if (func_28() == iParam0)
			{
				return 0;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_29(63))
					{
						return 0;
					}
					if (func_30(76) || func_31())
					{
						return 0;
					}
					break;
				case 125:
					if (!func_32())
					{
						return 0;
					}
					break;
				case 129:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(19, 0))
					{
						return 0;
					}
					break;
				case 114:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(20, 0))
					{
						return 0;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_24() == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	if (func_35(iParam0, 256))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar2 = func_36(iParam0);
		if (!func_37(iVar2))
		{
			return 0;
		}
		iVar3 = func_38(iVar2);
		if (func_39(iVar3))
		{
			func_40(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_41(iVar3, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_6(bool bParam0)
{
	func_42();
	Local_20.f_215 = Local_15.f_1;
	return 1;
}

int func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return 1;
	}
	if (!func_43(iParam0))
	{
		return 1;
	}
	if (func_35(iParam0, 16))
	{
		return 1;
	}
	if (func_44(iParam0) && !func_45(iParam0))
	{
	}
	if (func_46(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_47(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_47(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_44(iParam0) || func_45(iParam0)) || func_48(&Global_1897950))
			{
				func_49(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_8(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_9(int iParam0)
{
	iParam0 = iParam0;
}

void func_10(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	func_50(uParam1, Local_20.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", true, true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	Local_20.f_189 = 1;
	func_51();
	func_52();
	func_53(&Local_20, 118, &sLocal_544, 30);
	func_54(&(Local_20.f_155), 1);
	func_55(&(Local_20.f_155), 0);
	func_56(&(Local_20.f_155), 1);
	func_57(&(Local_20.f_155), 1);
	func_58(&(Local_20.f_155), 1);
	func_59(&(Local_20.f_155), 67);
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
}

bool func_13(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_14(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_15(bool bParam0)
{
	return 1;
}

int func_16(int iParam0)
{
	switch (Local_20)
	{
		case 0:
			if (func_60(&Local_20, &uLocal_542, &uLocal_538, "FORTM", 0))
			{
				func_61(&Local_20, 1);
			}
			break;
		case 1:
			if (func_62(&Local_20, &Local_244, joaat("REL_GANG_SMUGGLERS"), iLocal_568, iLocal_569))
			{
				Local_20.f_197 = 0;
				func_63(&Local_472);
				func_64();
				func_61(&Local_20, 5);
				func_65(0);
			}
			break;
		case 5:
			func_66(&Local_20, &Local_244, iLocal_568, iLocal_569);
			func_67();
			func_68();
			func_69();
			func_61(&Local_20, 6);
			func_70();
			break;
		case 6:
			if (func_71(&Local_20))
			{
				func_61(&Local_20, 7);
			}
			break;
		case 7:
			func_72();
			break;
	}
	if (!func_73(&Local_20, 4) && Local_20 >= 6)
	{
		func_74(&Local_20, &Local_244);
		func_75();
	}
	func_76(&Local_20);
	func_77();
	return 0;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_78(&Global_1935630, 16384)) || func_78(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_79(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_80();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_81((*uParam0)[iVar3 /*3*/], 1) && func_82(iParam1)) && !func_83(iParam1, 16))
							{
								func_85(iParam1, func_84(), -1, 0, -1, 0);
								func_86((*uParam0)[iVar3 /*3*/], 1);
							}
							func_87(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_24() == -1)
	{
		if (func_88() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_89();
			func_90(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_91(bVar0);
	if (func_24() == -1)
	{
		func_92((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_93(bLocal_603);
	func_94(bLocal_603);
	if (func_24() == -1)
	{
		if (iLocal_602 != 5)
		{
			func_95(iLocal_602);
		}
	}
	if (iLocal_602 != 5)
	{
		func_96(iLocal_602);
		func_97(iLocal_602, 4);
		func_97(iLocal_602, 8);
		func_91(0);
		if (func_24() == -1)
		{
			func_92(0);
		}
	}
	func_98(0);
	if (func_28() == iLocal_602)
	{
		func_99(0);
	}
	if (func_100(func_36(iLocal_602), 1))
	{
		func_102(func_101(iLocal_602), 1, 0);
	}
	func_103(iLocal_602);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_20(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 8);
}

bool func_21(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_22(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_104(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return (Global_40.f_9571[iVar0 /*10*/])->f_1 == 5;
}

int func_24()
{
	return Global_1572887->f_12;
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_105())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_106(&(Global_1898164->f_1[0 /*5*/]));
		if (func_107(iVar0) && func_108(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_37(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_27(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_110(func_109(iParam0));
}

int func_28()
{
	return Global_40.f_4283.f_1;
}

int func_29(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_107(iParam0))
	{
		return 0;
	}
	return func_100(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_100(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_31()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_three"))
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_33()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_24() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!func_111(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -15;
	}
	return func_112(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_113(*iParam0);
	iVar1 = func_114(*iParam0);
	iVar2 = func_115(*iParam0);
	iVar3 = func_116(*iParam0);
	iVar4 = func_117(*iParam0);
	iVar5 = func_118(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_119(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_119(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_120(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_122(func_121(), iParam0, bParam1);
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_BOX(-4218.855f, -3453.422f, 39.44371f, 0f, 0f, -45.10696f, 73.68802f, 101.1393f, 15.12208f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-4216.379f, -3461.898f, 37.05473f, 0f, 0f, 0f, 122.2548f, 119.8828f, 59.38927f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-4222.206f, -3511.035f, 39.89782f, 0f, 0f, 121.44f, 3.746872f, 6.170708f, 7.757661f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_BOX(-4185.451f, -3417.06f, 40.82632f, 0f, 0f, -46.91608f, 6.688188f, 4.307337f, 11.7211f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-4224.079f, -3452.337f, 43.4086f, 0f, 0f, -32.25804f, 22.95121f, 17.3053f, 24.01812f);
}

bool func_43(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_44(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 33554432);
}

int func_45(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_24() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_49(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0, 2))
	{
		return 0;
	}
	if (func_123(iParam0, 32) && !bParam1)
	{
		func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
		if (func_24() == -1)
		{
			if (func_123(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_126(iParam0));
				func_127(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_126(iParam0));
		}
		return 0;
	}
	if (!func_128(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_126(iParam0)))
	{
		func_127(iParam0, 128);
		return 1;
	}
	func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_126(iParam0));
	if (func_123(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_126(iParam0));
		func_127(iParam0, 2048);
	}
	return 1;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_129(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

void func_51()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		*(Local_472[iVar0 /*14*/]) = { func_130(1, iVar0) };
		(Local_472[iVar0 /*14*/])->f_6 = func_131(1, iVar0);
		iVar0++;
	}
	(Local_472[0 /*14*/])->f_7 = joaat("gatling_gun");
	func_132(&uLocal_538, (Local_472[0 /*14*/])->f_7);
	(Local_472[0 /*14*/])->f_11 = 1;
	(Local_472[0 /*14*/])->f_12 = 1;
	(Local_472[1 /*14*/])->f_7 = joaat("gatling_gun");
	(Local_472[1 /*14*/])->f_11 = 1;
	(Local_472[1 /*14*/])->f_12 = 1;
}

void func_52()
{
	int iVar0;

	Local_20.f_199 = 17;
	Local_20.f_201 = Local_20.f_199;
	iLocal_568 = 0;
	iLocal_569 = 16;
	iVar0 = iLocal_568;
	while (iVar0 <= iLocal_569)
	{
		Local_244[iVar0 /*9*/] = joaat("g_m_m_unibanditos_01");
		iVar0++;
	}
	func_132(&uLocal_538, &(Local_244[0 /*9*/]));
	func_133();
}

void func_53(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;

	func_134(128);
	iParam0->f_205 = iParam1;
	bVar0 = func_135(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { func_136(iParam0->f_205, bVar0) };
	iParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		func_137(iParam0->f_202, 120f, 0);
	}
	else
	{
		func_137(iParam0->f_202, 80f, 0);
	}
	func_138(iParam0, 1);
	func_139(&(iParam0->f_155));
	func_140(&(iParam0->f_155));
	func_141(&(iParam0->f_155));
	func_142(&(iParam0->f_155), 1);
	func_143(&(iParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	func_59(&(iParam0->f_155), 50);
	func_144(&(iParam0->f_155), 8f);
	func_145(sParam2);
	func_146(iParam0);
	if (!func_147(65))
	{
		func_148(iParam0);
	}
	func_149(iParam0);
	func_150(iParam0);
	func_151(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 4);
	}
	else
	{
		func_153(uParam0, 4);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 1);
	}
	else
	{
		func_152(&(uParam0->f_1), 1);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 8);
	}
	else
	{
		func_153(uParam0, 8);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 32);
	}
	else
	{
		func_153(uParam0, 32);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 2);
	}
	else
	{
		func_153(uParam0, 2);
	}
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

int func_60(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_201);
	}
	else
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_199);
	}
	if (func_154(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if (iParam1[iParam0->f_197 /*9*/] != 0)
	{
		func_155((*iParam1)[iParam0->f_197 /*9*/], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!((*uParam0)[iVar0 /*14*/])->f_11)
		{
			if (((*uParam0)[iVar0 /*14*/])->f_7 != 0)
			{
				if (((*uParam0)[iVar0 /*14*/])->f_13 > -1)
				{
					iVar10 = ((*uParam0)[iVar0 /*14*/])->f_13;
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*((*uParam0)[iVar10 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_6, *((*uParam0)[iVar0 /*14*/])) };
					((*uParam0)[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam0)[iVar0 /*14*/])->f_7, vVar7, true, true, false, false, true);
					if (!((*uParam0)[iVar10 /*14*/])->f_11)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar10 /*14*/])->f_8, 0, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar10 /*14*/])->f_9, 0, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
				}
				else
				{
					((*uParam0)[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam0)[iVar0 /*14*/])->f_7, *((*uParam0)[iVar0 /*14*/]), true, true, true, false, true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_8, true, false) };
				}
				ENTITY::SET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar0 /*14*/])->f_3, 2, true);
				if (((*uParam0)[iVar0 /*14*/])->f_12)
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar0 /*14*/])->f_12);
				}
				else
				{
					PHYSICS::ACTIVATE_PHYSICS(((*uParam0)[iVar0 /*14*/])->f_8);
					ENTITY::_0x9587913B9E772D29(((*uParam0)[iVar0 /*14*/])->f_8, 0);
				}
			}
		}
		else
		{
			((*uParam0)[iVar0 /*14*/])->f_9 = VEHICLE::CREATE_VEHICLE(((*uParam0)[iVar0 /*14*/])->f_7, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_6, true, true, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*14*/])->f_8))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_8, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_8, 2) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*14*/])->f_9))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_9, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_9, 2) };
		}
		iVar0++;
	}
}

void func_64()
{
	ENTITY::_0x9587913B9E772D29((Local_472[0 /*14*/])->f_9, 0);
	ENTITY::SET_ENTITY_HEADING((Local_472[0 /*14*/])->f_9, 311.8031f);
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY((Local_472[0 /*14*/])->f_9))
	{
		ENTITY::_0x445D7D8EA66E373E((Local_472[0 /*14*/])->f_9, 0, ENTITY::GET_ENTITY_COORDS((Local_472[0 /*14*/])->f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
	}
	ENTITY::_0x9587913B9E772D29((Local_472[1 /*14*/])->f_9, 0);
	ENTITY::SET_ENTITY_HEADING((Local_472[1 /*14*/])->f_9, 360.08f);
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY((Local_472[1 /*14*/])->f_9))
	{
		ENTITY::_0x445D7D8EA66E373E((Local_472[1 /*14*/])->f_9, 0, ENTITY::GET_ENTITY_COORDS((Local_472[1 /*14*/])->f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
	}
}

void func_65(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((Local_244[iVar0 /*9*/])->f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG((Local_244[iVar0 /*9*/])->f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), (Local_244[iVar0 /*9*/])->f_5, 7, 0, true);
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_156(((*iParam1)[iVar0 /*9*/])->f_5, 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(((*iParam1)[iVar0 /*9*/])->f_5, true);
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
		{
			func_157(&(Local_20.f_155), (Local_244[iVar0 /*9*/])->f_5);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS((Local_244[iVar0 /*9*/])->f_5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 49, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 58, true);
			PED::SET_PED_HEARING_RANGE((Local_244[iVar0 /*9*/])->f_5, 10f);
			PED::SET_PED_COMBAT_MOVEMENT((Local_244[iVar0 /*9*/])->f_5, 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_244[iVar0 /*9*/])->f_5, ENTITY::GET_ENTITY_COORDS((Local_244[iVar0 /*9*/])->f_5, true, false), 5f, 0, false, 0);
			PED::SET_PED_COMBAT_RANGE((Local_244[iVar0 /*9*/])->f_5, 1);
			switch (iVar0)
			{
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_244[iVar0 /*9*/])->f_5, ENTITY::GET_ENTITY_COORDS((Local_244[iVar0 /*9*/])->f_5, true, false), 5f, 0, false, 0);
					break;
				case 12:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_244[iVar0 /*9*/])->f_5, ENTITY::GET_ENTITY_COORDS((Local_244[iVar0 /*9*/])->f_5, true, false), 10f, 0, false, 0);
					break;
				case 4:
					PED::_0xFC3DB99C8144CD81((Local_244[iVar0 /*9*/])->f_5, Local_15, 0, false, 0);
					break;
				case 5:
					PED::_0xFC3DB99C8144CD81((Local_244[iVar0 /*9*/])->f_5, Local_15, 0, false, 0);
					break;
				case 10:
					WEAPON::REMOVE_ALL_PED_WEAPONS((Local_244[iVar0 /*9*/])->f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT((Local_244[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 1, false);
					break;
				case 14:
					PED::_0xFC3DB99C8144CD81((Local_244[iVar0 /*9*/])->f_5, Local_15, 0, false, 0);
					PED::SET_PED_COMBAT_RANGE((Local_244[iVar0 /*9*/])->f_5, 2);
					break;
				case 13:
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 50, false);
					break;
				case 9:
					WEAPON::REMOVE_ALL_PED_WEAPONS((Local_244[iVar0 /*9*/])->f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT((Local_244[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 1, false);
					break;
				case 16:
					PED::SET_PED_HEARING_RANGE((Local_244[iVar0 /*9*/])->f_5, 30f);
					PED::SET_PED_SEEING_RANGE((Local_244[iVar0 /*9*/])->f_5, 30f);
					break;
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = joaat("WORLD_HUMAN_GUARD_SCOUT");
	iVar2 = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
		{
			func_158((Local_244[iVar0 /*9*/])->f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			switch (iVar0)
			{
				case 0:
					iLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, (Local_244[iVar0 /*9*/])->f_1, (Local_244[iVar0 /*9*/])->f_4, 0f, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT((Local_244[iVar0 /*9*/])->f_5, &(iLocal_570[iVar0]), 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30((Local_244[iVar0 /*9*/])->f_5);
					break;
				case 1:
					iLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, (Local_244[iVar0 /*9*/])->f_1, (Local_244[iVar0 /*9*/])->f_4, 0f, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT((Local_244[iVar0 /*9*/])->f_5, &(iLocal_570[iVar0]), 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30((Local_244[iVar0 /*9*/])->f_5);
					break;
				case 2:
					iLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, (Local_244[iVar0 /*9*/])->f_1, (Local_244[iVar0 /*9*/])->f_4, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT((Local_244[iVar0 /*9*/])->f_5, &(iLocal_570[iVar0]), 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30((Local_244[iVar0 /*9*/])->f_5);
					PED::_0xF1C03A5352243A30((Local_244[iVar0 /*9*/])->f_5);
					break;
				case 3:
					iLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, (Local_244[iVar0 /*9*/])->f_1, (Local_244[iVar0 /*9*/])->f_4, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT((Local_244[iVar0 /*9*/])->f_5, &(iLocal_570[iVar0]), 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30((Local_244[iVar0 /*9*/])->f_5);
					break;
			}
		}
		iVar0++;
	}
}

void func_69()
{
	sLocal_544[0] = "GANG_TAUNT_GEN";
	sLocal_544[1] = "GANG_TAUNT_GEN";
	sLocal_544[2] = "GANG_TAUNT_GEN";
	sLocal_544[3] = "TAUNT_GEN_MALE";
	sLocal_544[4] = "TAUNT_GEN_MALE";
	sLocal_544[5] = "TAUNT_GEN_MALE";
	sLocal_544[6] = "TAUNT_GEN_MALE";
	sLocal_544[7] = "TAUNT_GEN_MALE";
}

void func_70()
{
	if (!TASK::_0x841475AC96E794D1(&(iLocal_588[0])))
	{
		iLocal_588[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -4182.402f, -3437.536f, 36.0652f, 234.84f, 5f, 0, 0);
	}
	if (!TASK::_0x841475AC96E794D1(&(iLocal_588[1])))
	{
		iLocal_588[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -4181.315f, -3437.357f, 36.03745f, 148.23f, 5f, 0, 0);
	}
	if (!TASK::_0x841475AC96E794D1(&(iLocal_588[5])))
	{
		iLocal_588[5] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -4182.402f, -3437.536f, 36.0652f, 234.84f, 5f, 0, 0);
	}
	if (!TASK::_0x841475AC96E794D1(&(iLocal_588[6])))
	{
		iLocal_588[6] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -4187.917f, -3435.651f, 36.1281f, 156.1638f, 5f, 0, 0);
	}
}

int func_71(int iParam0)
{
	float fVar0;

	if (func_159(iParam0->f_6.f_20))
	{
		return 1;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam0->f_6.f_20, true);
	fVar0 = (fVar0 * fVar0);
	if (!CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_24)
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_25)
	{
		return 0;
	}
	return 1;
}

void func_72()
{
	float fVar0;

	switch (Local_20.f_3)
	{
		case 0:
			func_160();
			if (func_161())
			{
				if (func_162(5, 100))
				{
					func_163();
				}
				else
				{
					func_164(&Local_20, 1);
					func_165();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_166())
			{
				func_167(2);
				func_164(&Local_20, 1);
			}
			break;
		case 1:
			if (!func_168(2))
			{
				if (func_169())
				{
					func_170(Local_20.f_192, 0, "FINAL_WARNING", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_20.f_192, Global_35, -1, false, 1);
					func_164(&Local_20, 2);
					func_171(&uLocal_553);
				}
			}
			else if (func_172())
			{
				func_163();
			}
			break;
		case 2:
			if (func_166())
			{
				func_167(2);
				func_170(Local_20.f_192, 0, "TAUNT_GEN_LOCATION", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_163();
			}
			if (!TASK::IS_PED_STILL(Global_35))
			{
				if (!PED::IS_PED_FACING_PED(Global_35, Local_20.f_192, 50f))
				{
					func_171(&uLocal_553);
				}
			}
			fVar0 = func_173(Local_20.f_192, Global_35, 1, 1);
			if (((fVar0 < 35f && func_174(&uLocal_553) > 5f) || func_173((Local_244[2 /*9*/])->f_5, Global_35, 1, 1) < 10f) || func_173((Local_244[3 /*9*/])->f_5, Global_35, 1, 1) < 10f)
			{
				func_163();
			}
			break;
		case 4:
			break;
		case 5:
			func_175();
			Local_20.f_198 = func_176(&Local_244, Local_20.f_199, Local_20.f_199);
			func_177();
			func_178();
			if (func_179() || Local_20.f_198 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				func_164(&Local_20, 7);
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
			func_164(&Local_20, 8);
			break;
		case 8:
			func_164(&Local_20, 9);
			break;
		case 9:
			if (func_180(&Local_20, &Local_244, 85, 1, 1))
			{
				func_164(&Local_20, 10);
			}
			break;
		case 10:
			break;
	}
	if (Local_20.f_3 <= 5)
	{
		func_181(&Local_244, &Local_20);
	}
	if (!func_73(&Local_20, 5))
	{
		if (func_182(&Local_20, &Local_244, Local_20.f_199, 0, 0))
		{
			func_163();
		}
	}
	else if (Local_20.f_3 > 8)
	{
		func_183(&Local_244, &Local_20, 100, 1084227584 /* Float: 5f */);
	}
}

int func_73(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (func_156(((*iParam1)[iParam0->f_196 /*9*/])->f_5, 0, 1))
		{
			((*iParam1)[iVar0 /*9*/])->f_8 = func_173(((*iParam1)[iParam0->f_196 /*9*/])->f_5, Global_35, 0, 1);
			if ((*iParam1)[iVar0 /*9*/])->f_8 < func_184(iParam0)
			{
				if (!func_185(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16))
				{
					func_186(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32);
					func_187(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16, 1);
				}
			}
			else if (!func_185(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32))
			{
				func_186(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16);
				func_187(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32, 1);
			}
			if (!func_135(&(iParam0->f_5), 65536))
			{
				if (func_188(((*iParam1)[iParam0->f_196 /*9*/])->f_5, 45f, 30f, ((*iParam1)[iVar0 /*9*/])->f_8, 70f))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(((*iParam1)[iParam0->f_196 /*9*/])->f_5, true, false) };
					func_189(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

void func_75()
{
	int iVar0;

	if (func_135(&(Local_20.f_5), 131072))
	{
		return;
	}
	if (!func_135(&(Local_20.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 11:
			case 12:
			case 13:
			case 14:
				if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
				{
					func_190(Local_244[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	func_189(&(Local_20.f_5), 131072);
}

void func_76(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (func_191(iParam0))
		{
		}
		if (func_192(Global_1888801[iParam0->f_205 /*35*/]) == 3)
		{
			if (func_156(Global_35, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			}
		}
		func_193(iParam0);
	}
	if (!func_135(&(iParam0->f_5), 1073741824 /* Float: 2f */))
	{
		if (!func_194())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				func_195(iParam0, 1);
				func_196(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			func_195(iParam0, 0);
			func_197(0);
		}
	}
	if (iParam0->f_195 < 5)
	{
		iParam0->f_195++;
	}
	else
	{
		iParam0->f_195 = 0;
	}
}

void func_77()
{
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_80()
{
	return func_78(&Global_1935630, 4096);
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_82(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_198(iParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_84()
{
	return Global_1897952->f_41;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_199())
	{
		return;
	}
	sVar1 = func_200(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_201(iParam4))
	{
		if (func_43(iParam0))
		{
			iParam4 = func_203(func_202(iParam0));
		}
		else
		{
			iParam4 = func_203(iParam1);
		}
	}
	if (func_201(iParam4))
	{
		iVar3 = func_204(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_206(func_205(iParam2));
	}
	else if ((func_207(iParam1, 2) || func_208(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_43(iParam0) && func_35(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_116(func_121());
		iVar5 = func_117(func_121());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_209(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_210(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_210(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_209(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_210(&cVar6, joaat("COLOR_PURE_WHITE")), func_210(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_211(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_87(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_24() == 0)
	{
		return;
	}
	if (func_212(128))
	{
		return;
	}
	if (!func_213(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_214(Global_1935630, 8192);
	func_216(func_215(-1532769513, joaat("areas")), 1);
	switch (func_202(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_216(func_215(-1532769513, joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_216(func_215(-1532769513, joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_216(func_215(-1532769513, joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_216(func_215(-1532769513, joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_216(func_215(-1532769513, joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_216(func_215(-1532769513, joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_8(iParam0, 64);
	}
}

bool func_88()
{
	return (Global_1894899 & 1 != 0 && func_217() != -1);
}

void func_89()
{
	if (!func_218(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_219(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_90(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_220() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_218(iVar1) && !func_221(iVar1, iParam2)) && (!bParam3 || !func_222(iVar1))) && (!bParam4 || !func_223(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_224(iVar0);
			}
		}
		iVar0++;
	}
}

void func_91(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

void func_93(bool bParam0)
{
}

void func_94(bool bParam0)
{
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_225(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_226(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_96(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_227(iVar0);
		}
		iVar0++;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 4);
	}
}

void func_99(bool bParam0)
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_228(iVar0) && !func_229(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_230(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_231(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

int func_100(int iParam0, bool bParam1)
{
	switch (func_192(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_232(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
		case 2016141805:
			func_233(1497516462);
			func_232(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
		case 1010885152:
			func_233(1497516462);
			func_233(2016141805);
			func_232(1010885152);
			func_233(-502324015);
			break;
		case -502324015:
			func_233(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_232(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_233(-538889627);
			func_233(-538880323);
			func_233(-1056767524);
			func_232(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_234();
			func_232(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_235();
			func_232(iParam0);
			break;
		case 2019386373:
			func_233(-664252410);
			func_233(2109952320);
			func_232(2019386373);
			break;
		case -664252410:
			func_233(2019386373);
			func_233(2109952320);
			func_232(-664252410);
			break;
		case 2109952320:
			func_233(2019386373);
			func_233(-664252410);
			func_232(2109952320);
			break;
		case -1674179981:
			func_233(-1835851517);
			func_233(-1838352012);
			func_232(-1674179981);
			break;
		case -1835851517:
			func_233(-1674179981);
			func_233(-1838352012);
			func_232(-1835851517);
			break;
		case -1838352012:
			func_233(-1674179981);
			func_233(-1835851517);
			func_232(-1838352012);
			break;
		case -1717960576:
			func_233(210001842);
			func_232(-1717960576);
			break;
		case 210001842:
			func_233(-1717960576);
			func_232(210001842);
			break;
		case -150493654:
			func_233(-1271608261);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-150493654);
			break;
		case -1271608261:
			func_233(-150493654);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-1271608261);
			break;
		case 1846061697:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(-1145519186);
			func_232(1846061697);
			break;
		case -1145519186:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(1846061697);
			func_232(-1145519186);
			break;
		case 1766284049:
			func_233(280705402);
			func_233(1926308480);
			func_232(1766284049);
			break;
		case 280705402:
			func_233(1766284049);
			func_233(1926308480);
			func_232(280705402);
			break;
		case 1926308480:
			func_233(1766284049);
			func_233(280705402);
			func_232(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_233(439465264);
				func_232(1609506757);
			}
			else
			{
				func_233(1609506757);
				func_233(439465264);
			}
			break;
		case 439465264:
			if (func_236(1609506757))
			{
				if (bParam1)
				{
					func_232(439465264);
				}
				else
				{
					func_233(439465264);
				}
			}
			break;
		case 1822001510:
			func_233(-1612662716);
			func_232(1822001510);
			break;
		case -1612662716:
			func_233(1822001510);
			func_232(-1612662716);
			break;
		case 1306158345:
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1306158345);
			break;
		case 1952610440:
			func_233(1306158345);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1952610440);
			break;
		case -223469678:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-404698347);
			func_233(1517904467);
			func_232(-223469678);
			break;
		case -404698347:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(1517904467);
			func_232(-404698347);
			break;
		case 1517904467:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_232(1517904467);
			break;
		case 1376646519:
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(1376646519);
			break;
		case 931649776:
			func_233(1376646519);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(931649776);
			break;
		case -434590080:
			func_233(1376646519);
			func_233(931649776);
			func_233(1743048395);
			func_233(449774763);
			func_232(-434590080);
			break;
		case 1743048395:
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(449774763);
			func_232(1743048395);
			break;
		case 449774763:
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_232(449774763);
			break;
		case -1414537028:
			func_233(38162571);
			func_233(1350391819);
			func_233(54073871);
			func_232(-1414537028);
			break;
		case 38162571:
			func_233(-1414537028);
			func_233(1350391819);
			func_233(54073871);
			func_232(38162571);
			break;
		case 1350391819:
			func_233(-1414537028);
			func_233(38162571);
			func_233(54073871);
			func_232(1350391819);
			break;
		case 54073871:
			func_233(-1414537028);
			func_233(38162571);
			func_233(1350391819);
			func_232(54073871);
			break;
		case 198200492:
			func_232(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			break;
		case -1124061431:
			func_233(198200492);
			func_232(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			break;
		case 52706132:
			func_233(198200492);
			func_233(-1124061431);
			func_232(52706132);
			func_233(-259123672);
			break;
		case -259123672:
			func_233(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_232(-259123672);
			break;
		case -919512195:
			func_232(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			func_233(1703426636);
			break;
		case -1925798111:
			func_232(-1925798111);
			func_233(-919512195);
			func_233(420709909);
			func_233(1703426636);
			break;
		case 420709909:
			func_232(420709909);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(1703426636);
			break;
		case 1703426636:
			func_232(1703426636);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			break;
		case -1223121209:
			func_232(-1223121209);
			func_233(630808005);
			break;
		case 630808005:
			func_232(630808005);
			func_233(-1223121209);
			break;
		case 1453909576:
			func_232(1453909576);
			func_233(1643531967);
			break;
		case 1643531967:
			func_232(1643531967);
			func_233(1453909576);
			break;
		case 0:
			func_232(0);
			func_233(473295046);
			func_233(-1738165526);
			break;
		case 473295046:
			func_232(473295046);
			func_233(0);
			func_233(-1738165526);
			break;
		case -1738165526:
			func_232(-1738165526);
			func_233(0);
			func_233(473295046);
			break;
		case 932909855:
			func_232(932909855);
			func_233(2051822093);
			break;
		case 2051822093:
			func_232(2051822093);
			func_233(932909855);
			break;
		case 405586984:
			func_232(405586984);
			func_233(1509509592);
			func_233(-959357075);
			func_233(-1311865656);
			break;
		case 1509509592:
			func_232(1509509592);
			func_233(405586984);
			func_233(-959357075);
			func_233(-1311865656);
			break;
		case -959357075:
			func_232(-959357075);
			func_233(1509509592);
			func_233(405586984);
			func_233(-1311865656);
			break;
		case -1311865656:
			func_232(-1311865656);
			func_233(1509509592);
			func_233(-959357075);
			func_233(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_232(-524145696);
			}
			else
			{
				func_233(-524145696);
			}
			func_233(1626481264);
			func_233(282809459);
			break;
		case 282809459:
			func_232(282809459);
			func_233(1626481264);
			func_233(-524145696);
			break;
		case 1626481264:
			func_232(1626481264);
			func_233(-524145696);
			func_233(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_232(885203519);
			}
			else
			{
				func_233(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_232(-1080627546);
			}
			else
			{
				func_233(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_236(iParam0))
				{
					func_232(iParam0);
				}
			}
			else if (func_236(iParam0))
			{
				func_233(iParam0);
			}
			break;
	}
}

void func_103(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
	func_237(&Local_244, &Local_20, &uLocal_538, SCRIPTS::GET_ID_OF_THIS_THREAD(), "FORTM");
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_31() && !func_30(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

int func_105()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_238(func_109(iParam0));
}

bool func_107(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_109(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_110(int iParam0)
{
	return iParam0 & 31;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_112(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_113(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_239(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_114(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_115(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_116(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_117(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_118(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_119(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_240(iParam0, iParam6);
	func_241(iParam0, iParam5);
	func_242(iParam0, iParam4);
	func_243(iParam0, iParam3);
	func_244(iParam0, iParam2);
	func_245(iParam0, iParam1);
}

int func_121()
{
	return &Global_1899515;
}

bool func_122(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_246(iParam1) || !func_246(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_123(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_124(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_125(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_126(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_127(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_128(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_129(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

Vector3 func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -4185.303f, -3414.666f, 36.088f;
				case 1:
					return -4183.363f, -3417f, 36.088f;
				case 2:
					return -4223.218f, -3513.264f, 36.0825f;
				case 3:
					return -4220.521f, -3511.443f, 36.0853f;
				case 4:
					return -4191.795f, -3438.381f, 36.088f;
				case 5:
					return -4193.48f, -3438.976f, 36.088f;
				case 6:
					return -4202.151f, -3448.898f, 36.0879f;
				case 7:
					return -4199.615f, -3448.947f, 36.0879f;
				case 8:
					return -4214.395f, -3442.828f, 36.0879f;
				case 9:
					return -4244.199f, -3476.454f, 36.0879f;
				case 10:
					return -4246.909f, -3475.4f, 36.0879f;
				case 11:
					return -4174.078f, -3422.861f, 41.5635f;
				case 12:
					return -4186.242f, -3417.56f, 41.5154f;
				case 13:
					return -4215.506f, -3503.066f, 41.6512f;
				case 14:
					return -4234.949f, -3425.885f, 44.4805f;
				case 15:
					return -4229.719f, -3454.22f, 36.0879f;
				case 16:
					return -4229.278f, -3460.126f, 36.0879f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -4248.017f, -3484.603f, 36.0854f;
				case 1:
					return -4227.841f, -3492.986f, 36.0879f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -4206.052f, -3461.478f, 44.3314f;
				case 1:
					return -4205.312f, -3462.005f, 44.3241f;
				case 2:
					return -4231.334f, -3456.103f, 36.1879f;
				case 3:
					return -4230.587f, -3455.087f, 36.0879f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -4194.434f, -3468.969f, 44.2737f;
				case 1:
					return -4194.979f, -3468.005f, 44.3203f;
				case 2:
					return -4230.731f, -3456.424f, 36.1879f;
				case 3:
					return -4246.011f, -3455.752f, 36.0854f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -4223.404f, -3462.209f, 43.5573f;
				case 1:
					return -4218.641f, -3464.778f, 43.5698f;
				case 2:
					return -4227.35f, -3467.501f, 36.1879f;
				case 3:
					return -4229.376f, -3462.732f, 36.0879f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 308.1447f;
				case 1:
					return -41.8553f;
				case 2:
					return 224.1447f;
				case 3:
					return 196.1447f;
				case 4:
					return 56.1447f;
				case 5:
					return 34.1447f;
				case 6:
					return 204.1447f;
				case 7:
					return 146.1447f;
				case 8:
					return 150.1447f;
				case 9:
					return 128.1447f;
				case 10:
					return 164.1447f;
				case 11:
					return 40.22f;
				case 12:
					return -45.36f;
				case 13:
					return 238.32f;
				case 14:
					return 50.4f;
				case 15:
					return 253.44f;
				case 16:
					return 148.2941f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 321.36f;
				case 1:
					return 3.08f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
				case 1:
					return 148.2941f;
				case 2:
					return 148.2941f;
				case 3:
					return 148.2941f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 121.931f;
				case 1:
					return 121.931f;
				case 2:
					return 210.96f;
				case 3:
					return 121.931f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
				case 1:
					return 148.2941f;
				case 2:
					return 133.8644f;
				case 3:
					return 151.92f;
			}
			break;
	}
	return 0f;
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if (uParam0[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

void func_133()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		Var1 = { func_247(0, iVar0) };
		(Local_244[iVar0 /*9*/])->f_1 = { Var1 };
		(Local_244[iVar0 /*9*/])->f_4 = Var1.f_3;
		iVar0++;
	}
}

void func_134(int iParam0)
{
	Global_1898091 = (&Global_1898091 - (Global_1898091 && iParam0));
}

bool func_135(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_136(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::_0xF70F00013A62F866(func_248(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_137(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_138(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (func_135(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_189(&(iParam0->f_5), 262144);
	}
	else
	{
		func_249(&(iParam0->f_5), 262144);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, true, true);
}

void func_139(var uParam0)
{
	func_251(uParam0, (func_250(uParam0) - 6f));
	func_252(uParam0, 1);
}

void func_140(var uParam0)
{
	func_253(uParam0, 0);
	func_254(uParam0, 0);
	func_142(uParam0, 1);
	func_255(uParam0, 1);
	func_256(uParam0, 0);
	func_257(uParam0, 1);
	func_258(uParam0, 1, 1, 1);
}

void func_141(var uParam0)
{
	func_259(uParam0, 1);
	func_58(uParam0, 1);
	func_56(uParam0, 1);
}

void func_142(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 256);
	}
	else
	{
		func_152(&(uParam0->f_1), 256);
	}
}

void func_143(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_144(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_145(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (*sParam0 <= 1)
	{
		return;
	}
	iVar0 = (*sParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = sParam0[iVar1];
		(*sParam0)[iVar1] = sParam0[iVar0];
		(*sParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_146(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

int func_147(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_107(iParam0))
	{
		return 0;
	}
	return func_260(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_148(int iParam0)
{
}

void func_149(int iParam0)
{
	iParam0->f_136.f_9 = { 0f, 0f, 0f };
	iParam0->f_136.f_12 = 1;
	iParam0->f_136.f_13 = 30f;
	iParam0->f_136.f_14 = 100f;
	iParam0->f_136.f_15 = -1;
	iParam0->f_136.f_16 = 1500;
	iParam0->f_136.f_17 = 1000;
	iParam0->f_136.f_6 = 25f;
}

void func_150(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	switch (iParam0->f_205)
	{
		case 79:
			iVar0 = joaat("INBRED");
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = joaat("ODRISCOLLS");
			}
			else
			{
				iVar0 = joaat("RANCHERS");
			}
			break;
		case 9:
			iVar0 = joaat("EX_CONFED");
			break;
		case 36:
			iVar0 = joaat("ODRISCOLLS");
			break;
		case 125:
			iVar0 = joaat("BANDITOS");
			break;
		case 127:
			iVar0 = joaat("BANDITOS");
			break;
		default:
			iParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { func_215(joaat("killed"), iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(iParam0->f_200));
	}
}

void func_151(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_261(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_154(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_262(uParam1);
			func_263(uParam2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || func_264(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_265(uParam1))
			{
				return 0;
			}
			if (!func_266(uParam2))
			{
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_267(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_185(&(uParam0->f_7), 2))
	{
		if (func_185(&(uParam0->f_7), 8))
		{
			iVar0 = func_267(joaat("a_c_horse_morgan_flaxenchestnut"), uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (func_185(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, false, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		func_268(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

bool func_156(bool bParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(bParam0, iParam1);
}

void func_157(var uParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(bParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(bParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(bParam1, "UsesTracker", true);
}

int func_158(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_269(iParam3, 1);
	bVar1 = func_269(iParam3, 2);
	bVar2 = !func_269(iParam3, 4);
	bVar3 = func_269(iParam3, 8);
	bVar4 = !func_269(iParam3, 16);
	bVar5 = func_269(iParam3, 32);
	bVar6 = func_269(iParam3, 64);
	return func_270(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, bParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_159(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	int iVar0;

	if (MISC::IS_BULLET_IN_AREA(-4185.43f, -3416.938f, 45.6745f, 10f, true))
	{
		if (func_156((Local_244[12 /*9*/])->f_5, 0, 1) && !func_271((Local_244[12 /*9*/])->f_5, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COWER(0, 3500, 0, 0);
			func_272((Local_244[12 /*9*/])->f_5, &iVar0, 0f, 0f, 1, 1);
		}
	}
}

int func_161()
{
	int iVar0;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_15.f_3), Global_36, false) > 25f && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_15.f_2), Global_36, false) > 25f)
	{
		return 0;
	}
	Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 3);
	if (Local_20.f_190 < 0 || PED::_0x7F9B9791D4CB71F6((Local_244[Local_20.f_190 /*9*/])->f_5, Global_35, true, 0) != 1)
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_20.f_190 = 0;
	}
	else
	{
		Local_20.f_190 = 3;
	}
	Local_20.f_192 = (Local_244[Local_20.f_190 /*9*/])->f_5;
	MISC::_0x870708A6E147A9AD(Local_20.f_192, "", 24f, 0, 8, 0, 0, 0, 0, -1);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_2, true, 0) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		if (func_162(5, 100))
		{
			func_170(Local_20.f_192, Global_35, "ITS_MALE_EXTREME_RECOGNIZE", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_170(Local_20.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_274(&uLocal_553, 0);
		}
	}
	func_275(Local_20.f_192, Global_36, 3, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_AIM_GUN_AT_ENTITY(false, Global_35, -1, false, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, Global_35, 6000, -1082130432, -1082130432, -1082130432);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_20.f_192, true, false), 30f, 0, false, false, false, false);
	func_272(Local_20.f_192, &iVar0, 0, 0, 1, 1);
	func_276(Local_20.f_205);
	func_277();
	return 1;
}

bool func_162(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_278(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_279(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_163()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		if (func_280(iVar0))
		{
		}
		iVar0++;
	}
	func_164(&Local_20, 5);
	func_171(&uLocal_553);
	func_65(1);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
}

void func_164(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

void func_165()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), (Local_244[iVar0 /*9*/])->f_5, 3, 0, true);
		}
		iVar0++;
	}
}

int func_166()
{
	if (!func_281(Global_35, Local_15, 1, 0))
	{
		return 0;
	}
	Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 14);
	if (Local_20.f_190 < 0)
	{
		return 0;
	}
	Local_20.f_192 = (Local_244[Local_20.f_190 /*9*/])->f_5;
	return 1;
}

void func_167(int iParam0)
{
	uLocal_567 = (uLocal_567 || iParam0);
}

bool func_168(int iParam0)
{
	return (uLocal_567 && iParam0) != 0;
}

int func_169()
{
	float fVar0;

	if (func_168(2))
	{
		return 0;
	}
	if (func_282(Global_35, Local_15, 0, 1))
	{
		if (func_283())
		{
			return 1;
		}
	}
	else
	{
		fVar0 = func_173(Local_20.f_192, Global_35, 1, 1);
		if (fVar0 < 10f || func_284(&uLocal_553, 10f))
		{
			return 1;
		}
		if (func_284(&uLocal_553, 10f))
		{
			if ((fVar0 < 10f && PED::IS_PED_FACING_PED(Global_35, Local_20.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_20.f_192))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_170(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_285(bParam0, bParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_171(bool bParam0)
{
	func_286(bParam0, 0f);
}

int func_172()
{
	int iVar0;
	int iVar1;

	switch (iLocal_562)
	{
		case 0:
			if (func_156(Local_20.f_192, 0, 1))
			{
				func_287(Local_20.f_192, Global_35, -1);
				func_274(&uLocal_556, 1);
				func_288(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_20.f_192, Global_35, 60f) || func_284(&uLocal_556, 2f))
			{
				func_171(&uLocal_556);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_20.f_192, Global_35, 8000, false, 1);
				func_170(Local_20.f_192, 0, "HEADS_UP_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_288(2);
			}
			break;
		case 2:
			iVar1 = (Local_20.f_199 - 1);
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				func_289(&Local_20, &Local_244, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (func_284(&uLocal_556, 2f))
			{
				func_288(3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

float func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

float func_174(bool bParam0)
{
	if (!func_290(bParam0))
	{
		return bParam0->f_1;
	}
	if (func_291(bParam0))
	{
		return bParam0->f_2;
	}
	return (func_292() - bParam0->f_1);
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iLocal_563)
	{
		case 0:
			func_274(&uLocal_559, 0);
			iLocal_563 = 1;
			break;
		case 1:
			if (func_284(&uLocal_559, 16f))
			{
				iVar1 = 0;
				while (iVar1 < Local_20.f_199)
				{
					if (func_156((Local_244[iVar1 /*9*/])->f_5, 0, 1) && func_293(Global_35, (Local_244[iVar1 /*9*/])->f_5) < 20f)
					{
						if (iVar0 < 3)
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						}
						else
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(3, 8);
						}
						func_170((Local_244[iVar1 /*9*/])->f_5, 0, &(sLocal_544[iVar0]), "", -1f, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_563 = 2;
					}
					else
					{
						iVar1++;
					}
				}
			}
			break;
		case 2:
			func_274(&uLocal_559, 1);
			iLocal_563 = 0;
			break;
	}
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_156(((*iParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_177()
{
	int iVar0;

	switch (iLocal_566)
	{
		case 0:
			if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0) && func_294(Global_35, -4183.556f, -3415.047f, 36.0861f, 1) > 50f) && func_294(Global_35, -4218.61f, -3514.725f, 36.0157f, 1) > 50f)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 30, true);
					}
					iVar0++;
				}
				iLocal_566++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0) || func_294(Global_35, -4219.153f, -3462.083f, 43.7362f, 1) < 85f)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((Local_244[iVar0 /*9*/])->f_5, 30, false);
					}
					iVar0++;
				}
				iLocal_566 = 0;
			}
			break;
	}
}

void func_178()
{
	int iVar0;

	switch (iLocal_565)
	{
		case 0:
			if (Local_20.f_198 < 9)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156((Local_244[iVar0 /*9*/])->f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81((Local_244[iVar0 /*9*/])->f_5, Local_15, 0, false, 0);
					}
					iVar0++;
				}
				iLocal_565++;
			}
			break;
		case 1:
			break;
	}
}

int func_179()
{
	switch (iLocal_564)
	{
		case 0:
			if (func_282(Global_35, Local_15.f_3, 0, 1))
			{
				if (func_156((Local_244[11 /*9*/])->f_5, 0, 1))
				{
					TASK::TASK_SET_SPHERE_DEFENSIVE_AREA((Local_244[11 /*9*/])->f_5, -4179.8f, -3431.705f, 41.5212f, 4f);
				}
				func_295(1);
			}
			break;
		case 1:
			if (func_282(Global_35, Local_15.f_4, 0, 1))
			{
				func_64();
				func_296();
				func_295(2);
			}
			break;
		case 2:
			func_297();
			func_298();
			if (func_299())
			{
				func_295(3);
			}
			break;
		case 3:
			func_295(5);
			break;
		case 5:
			return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_300(iParam1, iParam0))
	{
		return 0;
	}
	if (!func_135(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_301(iParam0);
		func_302(iParam0);
		if (bParam4)
		{
			func_303(iParam0->f_205, bParam3, 0);
		}
		func_138(iParam0, 0);
		func_189(&(iParam0->f_5), 256);
		func_189(&(iParam0->f_5), 8);
	}
	return 1;
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_304(iParam1->f_205) && !func_78(&Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST(((*iParam0)[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(((*iParam0)[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_305(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_306(((*iParam1)[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG(((*iParam1)[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = ((*iParam1)[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return 1;
		}
		else if (func_307(iParam0, (*iParam1)[iVar0 /*9*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	bVar1 = func_135(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		func_308((*iParam0)[iVar0 /*9*/], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

float func_184(int iParam0)
{
	return 18f;
}

bool func_185(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_187(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

int func_188(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_294(bParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1, int iParam2)
{
	if (!func_156(uParam0->f_5, 0, 0) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		func_309(&(uParam0->f_6));
	}
	uParam0->f_6 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, iParam2);
	}
}

int func_191(int iParam0)
{
	if (!func_135(&(iParam0->f_5), 1024))
	{
		if (VOLUME::_0xF256A75210C5C0EB(iParam0->f_215, Global_36))
		{
			if (func_156(Global_35, 0, 1))
			{
				func_310(iParam0, 1);
				func_189(&(iParam0->f_5), 1024);
				return 1;
			}
		}
	}
	else if (!VOLUME::_0xF256A75210C5C0EB(iParam0->f_215, Global_36) && func_192(Global_1888801[iParam0->f_205 /*35*/]) != 3)
	{
		if (func_156(Global_35, 0, 1))
		{
			func_310(iParam0, 0);
			func_249(&(iParam0->f_5), 1024);
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_311(iParam0);
}

void func_193(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_312(302))
	{
		return;
	}
	if (func_28() == iParam0->f_205)
	{
		return;
	}
	if (!func_313(iParam0->f_205))
	{
		return;
	}
	if (func_25(32, 0, 1))
	{
		return;
	}
	if (func_34(83, 0))
	{
		return;
	}
	if (!func_5(iParam0->f_205, 0))
	{
		return;
	}
	if (func_135(&(iParam0->f_5), 1024))
	{
		if (func_314(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_315(302, &iVar0, &iVar1);
			func_316(iVar0, iVar1);
			func_317(&iVar0, &iVar1);
			func_318("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_194()
{
	return func_319(2);
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_320(iParam0, 1);
		func_321(2);
	}
	else
	{
		if (func_319(2))
		{
			func_320(iParam0, 0);
		}
		func_134(2);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_135(&(iParam0->f_5), 32768))
		{
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			func_189(&(iParam0->f_5), 32768);
		}
	}
	else if (func_135(&(iParam0->f_5), 32768))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_249(&(iParam0->f_5), 32768);
	}
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		if (!func_322())
		{
			func_321(8);
		}
	}
	else if (func_322())
	{
		func_134(8);
	}
}

int func_198(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_31())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_323())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_25(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_200(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_324(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_326(func_325(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_327(iParam0) || func_328(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_202(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_204(int iParam0)
{
	if (!func_201(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case -1817904483:
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_207(int iParam0, int iParam1)
{
	if (!func_329(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_208(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

float func_209(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_210(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_330(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_211(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_212(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_213(int iParam0)
{
	int iVar0;

	if (func_327(iParam0))
	{
		if (!func_328(45))
		{
			return 0;
		}
	}
	iVar0 = func_202(iParam0);
	if (func_331())
	{
		if (!func_100(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_215(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_216(var uParam0, bool bParam1, bool bParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

int func_217()
{
	return Global_1894899->f_2;
}

bool func_218(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_219(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_220()
{
	return Global_1310750->f_16037;
}

bool func_221(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_222(int iParam0)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	if (func_332(64) && func_333(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_223(int iParam0)
{
	if (!func_218(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_224(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_218(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_334(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_225(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((Global_1392240->f_1[iVar0 /*18*/])->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(int iParam0)
{
	if (func_335(iParam0) && func_336())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_227(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_47((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_337((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_338((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_339((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_340(iParam0, 536870912);
	iVar1 = func_341(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_226(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_342(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_343(iParam0, 0);
}

bool func_228(int iParam0)
{
	return func_344(iParam0, 16, 1);
}

bool func_229(int iParam0)
{
	return func_230(iParam0, 32, 1);
}

bool func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return false;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_347(iParam0)))
	{
		func_348(iParam0, 4, 1);
		func_348(iParam0, 17, 1);
		func_348(iParam0, 1, 1);
		func_348(iParam0, 2, 1);
		return;
	}
	if (!func_349(iParam0))
	{
		return;
	}
	if (func_229(iParam0) && !bParam2)
	{
		return;
	}
	if (func_228(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_347(iParam0))) && func_350(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_348(iParam0, 4, 1);
	func_348(iParam0, 17, 1);
	func_348(iParam0, 1, 1);
	func_348(iParam0, 2, 1);
	func_351(iParam0, func_347(iParam0));
	func_352(iParam0, 1, 1, 1, bParam4);
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_353(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_353(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_234()
{
	func_233(-939420910);
	func_233(-1187950766);
	func_233(356365161);
	func_233(753127042);
	func_233(-2038424081);
	func_233(1884271742);
	func_233(459290420);
}

void func_235()
{
	func_233(704802028);
	func_233(588987611);
	func_233(2008888900);
	func_233(1649996811);
	func_233(227918160);
	func_233(168171957);
	func_233(1193080109);
	func_233(-491981251);
	func_233(-639037538);
	func_233(-618620429);
}

bool func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_353(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_237(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_135(&(iParam1->f_5), 8) && !func_135(&(iParam1->f_5), 4))
	{
		iVar0 = func_36(iParam1->f_205);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_260(iVar0))
			{
				if (!func_135(&(iParam1->f_5), 4096))
				{
					func_354(iParam1, 1);
					func_189(&(iParam1->f_5), 4096);
				}
				func_355(iParam1->f_205);
			}
		}
		else if (func_260(iVar0))
		{
			func_354(iParam1, 0);
			func_356(iParam1->f_205, iParam1->f_198);
			func_189(&(iParam1->f_5), 4);
		}
	}
	func_138(iParam1, 0);
	func_196(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		func_309(&(((*iParam0)[iVar1 /*9*/])->f_6));
		if ((CAM::IS_SCREEN_FADED_OUT() || (func_173(((*iParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 60f && ENTITY::IS_ENTITY_OCCLUDED(((*iParam0)[iVar1 /*9*/])->f_5))) || func_173(((*iParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 100f)
		{
			func_357(&(((*iParam0)[iVar1 /*9*/])->f_5));
		}
		iVar1++;
	}
	func_358(&(iParam1->f_214), 1, 1);
	func_359(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_DATABASE_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_360(&uVar2, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_215))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_215);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_215);
		VOLUME::_DELETE_VOLUME(iParam1->f_215);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_216))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_216);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_216);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(func_248(iParam1->f_205)))
	{
		POPULATION::_0xA1CFB35069D23C23(func_248(iParam1->f_205));
		POPULATION::_0x74C2B3DC0B294102(func_248(iParam1->f_205));
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	func_195(iParam1, 0);
	func_197(0);
	func_361(Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_238(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_239(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_240(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_241(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_114(*iParam0);
	iVar1 = func_113(*iParam0);
	if (iParam1 < 1 || iParam1 > func_119(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_243(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_245(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_118(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_117(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_116(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_113(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_114(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_115(iParam0);
	if (iVar5 < 1 || iVar5 > func_119(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

struct<4> func_247(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_130(iParam0, iParam1) };
	Var0.f_3 = func_131(iParam0, iParam1);
	return Var0;
}

int func_248(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_250(var uParam0)
{
	return uParam0->f_24;
}

void func_251(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 1);
	}
	else
	{
		func_153(uParam0, 1);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 16384);
	}
	else
	{
		func_152(&(uParam0->f_1), 16384);
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 2048);
	}
	else
	{
		func_152(&(uParam0->f_1), 2048);
	}
}

void func_255(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 16);
	}
	else
	{
		func_153(uParam0, 67108864);
		func_153(uParam0, 16);
	}
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 128);
	}
	else
	{
		func_152(&(uParam0->f_1), 128);
	}
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 256);
	}
	else
	{
		func_153(uParam0, 256);
	}
}

void func_258(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_152(uParam0, 268435456);
	}
	else
	{
		func_153(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_152(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_153(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_152(uParam0, 536870912);
	}
	else
	{
		func_153(uParam0, 536870912);
	}
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 512);
	}
	else
	{
		func_153(uParam0, 512);
	}
}

bool func_260(int iParam0)
{
	int iVar0;

	iVar0 = func_192(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_261(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_262(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_263(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

int func_264(char* sParam0, char* sParam1)
{
	void fVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		fVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam0);
		if (fVar0 == 0)
		{
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	fVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam1);
	if (fVar0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_265(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_266(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_267(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_362(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_269(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_270(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_0x959383DCD42040DA(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_363(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_363(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_24() == -1 && !func_364(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_364(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (bParam9 < 0)
	{
		if (iParam0 != Global_35 && func_363(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &bParam9, iVar0);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_0x79407D33328286C6(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(iVar0) * 3;
			bParam9 = (iVar24 - iVar23);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else
		{
			bParam9 = false;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_365(iVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_366(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_367(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_271(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_272(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = func_368((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!func_369(((*iParam0)[iParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (func_370(((*iParam0)[iParam1->f_191 /*9*/])->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					func_190((*iParam0)[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		else if (func_369(((*iParam0)[iParam1->f_191 /*9*/])->f_5))
		{
			if (func_173(((*iParam0)[iParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(((*iParam0)[iParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					func_190((*iParam0)[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

void func_274(var uParam0, bool bParam1)
{
	if (bParam1 || !func_290(uParam0))
	{
		func_171(uParam0);
	}
}

void func_275(bool bParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_1(bParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(bParam0))
	{
		PED::_0xF1C03A5352243A30(bParam0);
		return;
	}
	if (func_159(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(bParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(bParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(bParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(bParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(bParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(bParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(bParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(bParam0);
			break;
	}
}

void func_276(int iParam0)
{
	if (!func_43(iParam0))
	{
		return;
	}
}

void func_277()
{
	int iVar0[17];
	int iVar18;
	int iVar19;

	iVar18 = 0;
	while (iVar18 < iVar0)
	{
		iVar0[iVar18] = -1;
		iVar18++;
	}
	func_371(&Local_244, ENTITY::GET_ENTITY_COORDS(Local_20.f_192, false, false), &iVar0, 0, iLocal_569, 20f, 1);
	iVar18 = 0;
	while (iVar18 < iVar0)
	{
		if ((&iVar0[iVar18] != -1 && (Local_244[&iVar0[iVar18] /*9*/])->f_5 != Local_20.f_192) && func_156((Local_244[&iVar0[iVar18] /*9*/])->f_5, 0, 1))
		{
			func_275((Local_244[&iVar0[iVar18] /*9*/])->f_5, Global_36, 3, 1, 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar19);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, Global_35, 0, -1082130432, -1082130432, -1082130432);
			TASK::TASK_AIM_GUN_AT_ENTITY(false, Global_35, -1, false, 1);
			func_272((Local_244[&iVar0[iVar18] /*9*/])->f_5, &iVar19, 0.5f, 1.2f, 1, 1);
		}
		iVar18++;
	}
}

bool func_278(int iParam0, bool bParam1)
{
	if (!func_372(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (bParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

int func_280(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((Local_244[iVar0 /*9*/])->f_5, false, true);
			func_373(Local_244[iVar0 /*9*/], 0, 1, 1, 0, 0);
			break;
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((Local_244[iVar0 /*9*/])->f_5, false, true);
			func_373(Local_244[iVar0 /*9*/], 0, 1, 1, 0, 0);
			break;
		case 16:
			func_373(Local_244[iVar0 /*9*/], 0, 0, 1, 0, 0);
			break;
		default:
			func_373(Local_244[iVar0 /*9*/], 0, 1, 1, 0, 0);
			break;
	}
	return 1;
}

bool func_281(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, bParam1, bParam2, iParam3);
}

bool func_282(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, bParam1, true, 0);
}

int func_283()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 1);
	}
	else
	{
		Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 2, 3);
	}
	if (Local_20.f_190 < 0)
	{
		return 0;
	}
	else
	{
		Local_20.f_192 = (Local_244[Local_20.f_190 /*9*/])->f_5;
		func_374(Local_244[Local_20.f_190 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
		return 1;
	}
	return 0;
}

int func_284(bool bParam0, float fParam1)
{
	if (!func_290(bParam0))
	{
		return 0;
	}
	if (func_174(bParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_285(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_88())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_375(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_173(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_171(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_376(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = bParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_239(func_377(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_286(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_292() - fParam1);
	func_378(uParam0, 1);
	func_379(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_287(bool bParam0, bool bParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(bParam0, bParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_288(int iParam0)
{
	iLocal_562 = iParam0;
}

void func_289(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if ((((*iParam1)[iParam2 /*9*/])->f_5 == iParam0->f_192 && !bParam8) || !func_156(((*iParam1)[iParam2 /*9*/])->f_5, 0, 1))
	{
		return;
	}
	func_380(iParam1, iParam2, &fVar1, &fVar2);
	func_275(((*iParam1)[iParam2 /*9*/])->f_5, Global_36, 2, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_185(&(((*iParam1)[iParam2 /*9*/])->f_7), 32) || func_369(((*iParam1)[iParam2 /*9*/])->f_5))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			if (bParam7)
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else if (func_381())
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 8f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 0, 0f, false, 0, false, 0, false);
			}
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
		if ((func_381() || bParam6) && !func_185(&(((*iParam1)[iParam2 /*9*/])->f_7), 16))
		{
			PED::SET_PED_CONFIG_FLAG(((*iParam1)[iParam2 /*9*/])->f_5, 246, true);
			TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam1)[iParam2 /*9*/])->f_5))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(false, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
		func_382(((*iParam1)[iParam2 /*9*/])->f_5, Global_35, 500, 0, 1, 1);
	}
	if (bParam5)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	func_272(((*iParam1)[iParam2 /*9*/])->f_5, &iVar0, fVar1, fVar2, 1, 1);
}

bool func_290(bool bParam0)
{
	return func_383(*bParam0, 1);
}

bool func_291(bool bParam0)
{
	return func_383(*bParam0, 2);
}

float func_292()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_293(bool bParam0, bool bParam1)
{
	return func_173(bParam0, bParam1, 1, 1);
}

float func_294(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

void func_295(int iParam0)
{
	iLocal_564 = iParam0;
}

int func_296()
{
	int iVar0;
	int iVar1;

	if (func_156((Local_244[10 /*9*/])->f_5, 0, 1))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA((Local_244[10 /*9*/])->f_5, false);
		PED::SET_PED_COMBAT_RANGE((Local_244[10 /*9*/])->f_5, 2);
		PED::SET_PED_ACCURACY((Local_244[10 /*9*/])->f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_ENTER_VEHICLE(0, (Local_472[0 /*14*/])->f_9, 20000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272((Local_244[10 /*9*/])->f_5, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_FIRING_PATTERN((Local_244[10 /*9*/])->f_5, joaat("firing_pattern_full_auto"));
		CAM::_0x986F7A51EE3E1F92((Local_244[10 /*9*/])->f_5, 1);
	}
	if (func_156((Local_244[9 /*9*/])->f_5, 0, 1))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA((Local_244[9 /*9*/])->f_5, false);
		PED::SET_PED_COMBAT_RANGE((Local_244[9 /*9*/])->f_5, 2);
		PED::SET_PED_ACCURACY((Local_244[9 /*9*/])->f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_ENTER_VEHICLE(0, (Local_472[1 /*14*/])->f_9, 20000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272((Local_244[9 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
		PED::SET_PED_FIRING_PATTERN((Local_244[9 /*9*/])->f_5, joaat("firing_pattern_full_auto"));
		CAM::_0x986F7A51EE3E1F92((Local_244[9 /*9*/])->f_5, 1);
	}
	return 1;
}

void func_297()
{
	if ((((func_156((Local_244[10 /*9*/])->f_5, 0, 1) && !func_271((Local_244[10 /*9*/])->f_5, -1794415470)) && !func_271((Local_244[10 /*9*/])->f_5, 538064912)) && !func_271((Local_244[10 /*9*/])->f_5, 780511057)) && !PED::IS_PED_IN_VEHICLE((Local_244[10 /*9*/])->f_5, (Local_472[0 /*14*/])->f_9, true))
	{
		TASK::TASK_COMBAT_PED((Local_244[10 /*9*/])->f_5, Global_35, 0, 0);
	}
	if ((((func_156((Local_244[9 /*9*/])->f_5, 0, 1) && !func_271((Local_244[9 /*9*/])->f_5, -1794415470)) && !func_271((Local_244[9 /*9*/])->f_5, 538064912)) && !func_271((Local_244[9 /*9*/])->f_5, 780511057)) && !PED::IS_PED_IN_VEHICLE((Local_244[9 /*9*/])->f_5, (Local_472[1 /*14*/])->f_9, true))
	{
		TASK::TASK_COMBAT_PED((Local_244[9 /*9*/])->f_5, Global_35, 0, 0);
	}
}

void func_298()
{
	int iVar0;
	int iVar1;

	if ((func_156((Local_244[10 /*9*/])->f_5, 0, 1) && PED::IS_PED_IN_VEHICLE((Local_244[10 /*9*/])->f_5, (Local_472[0 /*14*/])->f_9, false)) && !func_185(&((Local_244[10 /*9*/])->f_7), 256))
	{
		if (func_173(Global_35, (Local_244[10 /*9*/])->f_5, 0, 0) < 10f || !PED::IS_PED_FACING_PED((Local_244[10 /*9*/])->f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, joaat("GROUP_REPEATER"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272((Local_244[10 /*9*/])->f_5, &iVar0, 0, 0, 1, 1);
			PED::_0xFC3DB99C8144CD81((Local_244[10 /*9*/])->f_5, Local_15, 0, false, 0);
			PED::SET_PED_COMBAT_MOVEMENT((Local_244[10 /*9*/])->f_5, 1);
			func_187(&((Local_244[10 /*9*/])->f_7), 256, 0);
		}
	}
	if ((func_156((Local_244[9 /*9*/])->f_5, 0, 1) && PED::IS_PED_IN_VEHICLE((Local_244[9 /*9*/])->f_5, (Local_472[1 /*14*/])->f_9, false)) && !func_185(&((Local_244[9 /*9*/])->f_7), 256))
	{
		if (func_173(Global_35, (Local_244[9 /*9*/])->f_5, 0, 0) < 10f || !PED::IS_PED_FACING_PED((Local_244[9 /*9*/])->f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, joaat("GROUP_REPEATER"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272((Local_244[9 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			PED::_0xFC3DB99C8144CD81((Local_244[9 /*9*/])->f_5, Local_15, 0, false, 0);
			PED::SET_PED_COMBAT_MOVEMENT((Local_244[9 /*9*/])->f_5, 1);
			func_187(&((Local_244[9 /*9*/])->f_7), 256, 0);
		}
	}
}

int func_299()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, (Local_472[0 /*14*/])->f_9, false))
	{
		if (func_384(0))
		{
			return 1;
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, (Local_472[1 /*14*/])->f_9, false))
	{
		if (func_384(1))
		{
			return 1;
		}
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
{
	if (!func_135(&(iParam1->f_5), 33554432))
	{
		if (func_385(iParam0) <= 0)
		{
			func_189(&(iParam1->f_5), 33554432);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	iVar2 = 0;
	switch (iParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = joaat("EX_CONFED");
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!func_31())
			{
				iVar2 = joaat("ODRISCOLLS");
			}
			else
			{
				iVar2 = joaat("SAVAGES");
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = joaat("ODRISCOLLS");
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("INBRED");
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("BANDITOS");
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("BANDITOS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { func_215(joaat("killed"), iVar2) };
		STATS::STAT_ID_GET_INT(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_386(iVar0, 1);
		}
		else
		{
			func_386(iVar1, 1);
		}
	}
}

void func_302(int iParam0)
{
	if (func_387(1) <= 0)
	{
		return;
	}
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_388(iVar0, 1, bParam1, 0, 1);
	func_389(iParam0, -1);
	if (bParam2)
	{
		if (func_390(iVar0) >= 1)
		{
			func_391(iVar0, (func_390(iVar0) - 1));
		}
	}
	else
	{
		func_392(0, 12);
		iVar1 = func_393(iParam0);
		if (func_390(iVar0) <= 1)
		{
			func_216(func_394(64058978), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = (Global_40.f_9571[iVar1 /*10*/])->f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				((*Global_1392050)[iVar1 /*14*/])->f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237->f_192[iVar1] = (func_395() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 8;
					}
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			func_397(func_396(iParam0, 1), 350f, 0);
			func_398(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

int func_304(int iParam0)
{
	int iVar0;

	if (!func_43(iParam0))
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return 0;
	}
	return func_260(iVar0);
}

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_399(iParam0, 57, func_396(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (func_192(iVar0) != 4)
	{
		func_214(Global_1935630, 32);
	}
	if (func_100(iVar0, 1))
	{
		func_400(iVar0);
	}
	iVar1 = func_393(iParam0);
	if (iVar1 != -1)
	{
		func_398(0, iVar1, 0, 12, 0);
	}
	func_401(iParam0);
	func_402(iVar0, 1);
	func_404(iVar0, 1, func_403(PLAYER::PLAYER_ID(), 1, 0, 1));
	func_405(iParam0);
	func_392(0, 12);
}

int func_306(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_406(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_407(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_408(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_409(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_410(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_411(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_403(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_408(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_412(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_413(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_414(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_415(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_415(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_408(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_416(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_417(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_418(uParam2, 4000))
				{
					if ((func_419(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_420(uParam2, bParam0)) && func_421(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_419(bParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_420(uParam2, bParam0)) && func_421(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_422(bParam0, Global_1935630->f_41))
							{
								func_423();
								*uParam3 = 2;
								func_408(bParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_422(bParam0, Global_1935630->f_41))
						{
							func_423();
							*uParam3 = 2;
							func_408(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_424(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_395() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_423();
						*uParam3 = 2;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(bParam0, Global_1935630->f_42))
						{
							func_423();
							*uParam3 = 2;
							func_408(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_426(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_408(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_427(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_428(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_429(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_430(uParam2, 4000))
				{
					if (func_431(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_408(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_432(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_408(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_433(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_408(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_307(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < func_387(1))
	{
		iVar1 = func_434(iVar0);
		if (func_349(iVar1))
		{
			bVar2 = func_435(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (func_156(bVar2, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_5, bVar2, 1, 1))
						{
							return 1;
						}
					}
					if (func_156(uParam1->f_5, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar2, uParam1->f_5, 1, 1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_308(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		if (func_156(uParam0->f_5, 0, 1))
		{
			if (!func_436(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, 1) == 1 || bParam7)
				{
					if (func_437(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
					}
					else if (func_284(bParam5, fParam6))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
						if (func_294(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

void func_309(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_310(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);
	}
}

int func_311(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_313(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_314(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_316(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_317(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_24() != -1)
	{
		uVar0 = &Global_36637.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36637.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

var func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_319(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_320(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	func_439(&iVar0, 0);
	func_439(&iVar0, 17);
	func_439(&iVar0, 28);
	if (bParam1)
	{
		COMPANION::_0x3CAAD93FA5B9579A(iParam0->f_215, 2, iVar0);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_215))
	{
		COMPANION::_0x7274F84B1501B523(iParam0->f_215);
	}
}

void func_321(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_322()
{
	return func_319(8);
}

int func_323()
{
	if (func_24() != 0)
	{
		return 1;
	}
	return 1;
}

char* func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_325(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_440(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

int func_328(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return func_442(iParam0);
}

bool func_329(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_330(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_331()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_332(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_333(int iParam0)
{
	return func_221(iParam0, Global_1310750->f_16072 | 64);
}

void func_334(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_335(int iParam0)
{
	if (func_443(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_336()
{
	return 1;
}

bool func_337(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_338(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_123(iParam0, 1))
	{
		return;
	}
	if (!func_123(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_337(iParam0)) && func_444(iParam0))
	{
		return;
	}
	func_127(iParam0, 1);
	func_445(iParam0);
	if (func_446(func_124(iParam0)))
	{
		iVar0 = func_126(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_127(iParam0, 16);
	}
	if (func_123(iParam0, 128) && !bParam3)
	{
		func_447(iParam0, 0);
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_449(iParam0, 1024))
		{
			func_450(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_449(iParam0, 1024))
	{
		func_451(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_452(iParam0);
}

void func_340(int iParam0, int iParam1)
{
	if (!func_453(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

int func_341(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_342(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_343(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_453(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_344(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_345(int iParam0)
{
	return iParam0 > -1;
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_347(int iParam0)
{
	if (!func_345(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_349(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

float func_350(int iParam0)
{
	if (!func_345(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_351(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_454(bParam1);
	}
}

void func_352(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_349(iParam0))
	{
		return;
	}
	if (func_228(iParam0))
	{
		if (!func_455(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_230(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_456(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_347(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_350(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::_0x0C3CB2E600C8977D(bVar1, 1)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::_0xF1C03A5352243A30(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_457(iParam0, 2, 1);
	}
	else
	{
		func_458(iParam0);
		func_457(iParam0, 1, 1);
	}
}

int func_353(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_354(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

void func_355(int iParam0)
{
	int iVar0;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_459(iVar0);
	}
	else
	{
		func_459(iVar0);
	}
}

void func_356(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_393(iParam0);
	if (iVar1 != -1)
	{
		((*Global_1392050)[iVar1 /*14*/])->f_1 |= 16;
	}
	func_460(iVar0, 0, 2);
	func_389(iParam0, iParam1);
}

void func_357(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_358(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_461(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_462(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_463(iVar0);
	*uParam0 = 0;
}

void func_359(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_360(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_464(2000);
	Global_16 = 0;
	func_465();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_466(*uParam0, 8));
	if (!func_466(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_466(*uParam0, 2) || func_466(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_466(*uParam0, 16))
	{
		func_467(1);
	}
	if (func_466(*uParam0, 32))
	{
		func_468(Global_35, -383172193 /* GXTEntry: "No Neckwear" */, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_469(joaat("KIT_BANDANA"), 0);
	}
	func_470(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_361(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_362(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (func_471(bParam1))
		{
			func_472(bParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(bParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(bParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_473(bParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(bParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_474(bParam0, 0);
			bVar0 = true;
		}
		func_475(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

bool func_363(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_364(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && bParam1 > 0)
	{
		bParam1 = false;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_476(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_477((375 + iVar28), 1);
			if (func_478(iParam0, &Var0, iVar5, 0))
			{
				if (func_479(iParam0, &Var6, iVar5))
				{
					Var29 = { func_480(iParam0, Var0, iVar5, 0) };
					func_481(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_482(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_483(WEAPON::_0x5C2EA6C44F515F34(iParam0), bParam1, iParam6);
					func_484(iParam0, bParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (bParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_366(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_367(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_368(int iParam0, bool bParam1)
{
	if (iParam0 > bParam1)
	{
		return bParam1;
	}
	return iParam0;
}

int func_369(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == 1690225020) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return 1;
	}
	if (iVar0 == joaat("Prop_player_sleep_tent_a_frame") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(bParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_370(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_406(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_418(uParam1, 4000))
				{
					if ((func_419(bParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_420(uParam1, bParam0)) && func_421(uParam1, bParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(bParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_418(uParam1, 4000))
				{
					if ((func_419(bParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_420(uParam1, bParam0)) && func_421(uParam1, bParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(bParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_422(bParam0, Global_1935630->f_41))
							{
								func_423();
								*uParam2 = 2;
								func_408(bParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_422(bParam0, Global_1935630->f_41))
						{
							func_423();
							*uParam2 = 2;
							func_408(bParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(bParam0, Global_1935630->f_42))
						{
							func_423();
							*uParam2 = 2;
							func_408(bParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_412(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_413(Global_35, bParam0, uParam1))
					{
						func_423();
						*uParam2 = 4;
						func_408(bParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_414(Global_35, bParam0, uParam1))
					{
						func_423();
						*uParam2 = 256;
						func_408(bParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_485(bParam0, uParam1))
			{
				func_423();
				*uParam2 = 131072;
				func_408(bParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_486(bParam0, uParam1))
			{
				func_423();
				*uParam2 = 262144;
				func_408(bParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_371(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = iParam5;
	while (iVar1 <= iParam6)
	{
		if (func_156(((*uParam0)[iVar1 /*9*/])->f_5, 0, 1) && iVar2 < *iParam4)
		{
			fVar0 = func_294(((*uParam0)[iVar1 /*9*/])->f_5, vParam1, iParam8);
			if (fVar0 < fParam7)
			{
				(*iParam4)[iVar2] = iVar1;
				iVar2++;
			}
		}
		iVar1++;
	}
}

int func_372(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

int func_373(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (func_156(uParam0->f_5, 0, 1))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
		if (!func_185(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (bParam4)
				{
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
				}
				if (iVar0 != 0)
				{
					if (bParam2 && (WEAPON::_0xD955FEE4B87AFA07(iVar0) || WEAPON::_0x0556E9D2ECF39D01(iVar0)))
					{
						func_382(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				func_272(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
			{
				func_190(uParam0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_374(var uParam0, int iParam1, int iParam2)
{
	func_190(uParam0, iParam1, iParam2);
}

float func_375(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1f;
	}
	return func_173(Global_35, bParam0, bParam1, bParam2);
}

int func_376(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_377(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = bParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_487(bParam0, &Var0);
}

void func_378(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_379(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_380(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_185(&(((*iParam0)[iParam1 /*9*/])->f_7), 16))
	{
		*fParam2 = 0.1f;
		*fParam3 = 0.5f;
	}
	else
	{
		*fParam2 = 0.4f;
		*fParam3 = 1f;
	}
	if (!func_369(((*iParam0)[iParam1 /*9*/])->f_5))
	{
		if (PED::IS_PED_FACING_PED(((*iParam0)[iParam1 /*9*/])->f_5, Global_35, 70f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam0)[iParam1 /*9*/])->f_5))
		{
			*fParam2 = (*fParam2 / 2f);
			*fParam3 = (*fParam3 / 2f);
		}
	}
}

int func_381()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_382(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			iVar0 = 0;
			if (!WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, true, 0, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(bParam0, WEAPON::GET_BEST_PED_WEAPON(bParam0, false, false), true, 0, false, false);
			}
			if (WEAPON::_0xD955FEE4B87AFA07(func_488(bParam0, 0)) || WEAPON::_0x0556E9D2ECF39D01(func_488(bParam0, 0)))
			{
				if (bParam4)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(false, bParam1, iParam2, bParam3, iParam5);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(bParam0, bParam1, iParam2, bParam3, iParam5);
				}
			}
		}
	}
}

bool func_383(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			func_489(0);
			if (func_62(&Local_20, &Local_398, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_156((Local_398[iVar0 /*9*/])->f_5, 0, 1))
					{
						func_158((Local_398[iVar0 /*9*/])->f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(false, (Local_501[iVar0 /*9*/])->f_1, Global_35, 3f, 1, 0.5f, 1f, 1, 0, 0, joaat("firing_pattern_burst_fire"), 20000, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(false, (Local_501[iVar0 /*9*/])->f_1, 0.5f, 0, false, 0);
						PED::SET_PED_COMBAT_RANGE(0, 2);
						PED::SET_PED_COMBAT_MOVEMENT(0, 1);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						func_272((Local_398[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
						func_374(Local_398[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_20.f_197 = 0;
				func_66(&Local_20, &Local_398, 0, 3);
				return 1;
			}
			break;
		case 1:
			func_489(1);
			if (func_62(&Local_20, &Local_435, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_156((Local_435[iVar0 /*9*/])->f_5, 0, 1))
					{
						func_158((Local_435[iVar0 /*9*/])->f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						TASK::TASK_SET_CROUCH_MOVEMENT((Local_435[iVar0 /*9*/])->f_5, true, 0, true);
						TASK::TASK_COMBAT_PED((Local_435[iVar0 /*9*/])->f_5, Global_35, 0, 0);
						func_374(Local_435[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_20.f_197 = 0;
				func_66(&Local_20, &Local_435, 0, 3);
				return 1;
			}
			break;
	}
	return 0;
}

int func_385(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MAP::DOES_BLIP_EXIST(((*iParam0)[iVar0 /*9*/])->f_6) && func_156(((*iParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_386(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_24() != -1)
	{
		return;
	}
	if (func_490(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_491())
	{
		iVar1 = 0;
	}
	func_492(iParam0, iVar1);
}

int func_387(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_493(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_494(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_494(), iVar3);
		if (func_495(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_388(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_37(iParam0))
	{
		return;
	}
	if (func_192(iParam0) == 4)
	{
		func_496(iParam0, func_121());
		if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
		{
			if (bParam3)
			{
				func_497(iParam0, 6);
			}
			else
			{
				func_497(iParam0, 5);
			}
			func_498(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_499(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_500(0, 2);
		if (!bVar1 && bParam1)
		{
			func_501();
		}
	}
	else
	{
		func_502(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_503(iParam0);
	}
	else
	{
		Var2 = { func_394(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_212(32768))
		{
			Var4 = { func_394(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_311(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_106(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_106(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_106(iParam0) != 95 && func_106(iParam0) != 82) && !func_108(((*Global_1347702)[func_106(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_106(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_106(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_505(func_106(iParam0), iVar6, func_504());
	}
	else if (iVar0 == 8)
	{
		func_507(func_106(iParam0), iVar6, func_504(), func_506());
	}
	if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
	{
		iVar9 = func_508(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_509(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_510(func_106(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_511((iVar10 - 20), 0, iVar10);
					iVar11 = func_511((iVar11 - 10), 0, iVar11);
				}
				func_512(1);
				func_513(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_513(45, 0, 1);
				break;
			case 8:
				iVar10 = func_514(func_106(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_511((iVar10 - 20), 0, iVar10);
					iVar11 = func_511((iVar11 - 10), 0, iVar11);
				}
				func_513(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_515(func_106(iParam0)))
				{
					func_516(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_513(120, 0, 1);
				break;
			case 2:
				func_513(120, 0, 1);
				break;
			case 6:
				func_513(func_518(func_517(iParam0)), 0, 1);
				break;
			case 5:
				func_513(120, 0, 1);
				break;
		}
	}
	func_519(iParam0, 1);
	func_496(iParam0, func_121());
	func_498(iParam0);
	if ((!func_311(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_520(iParam0);
		if (iVar12 != -1)
		{
			func_521(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_522();
			if (iVar12 != -1)
			{
				func_521(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_107(func_106(iParam0)) && func_108(((*Global_1347702)[func_106(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_106(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_523();
				}
				break;
			case 8:
				if (func_106(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_523();
				}
				break;
		}
	}
	if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
	{
		if (bParam3)
		{
			func_497(iParam0, 6);
		}
		else
		{
			func_497(iParam0, 5);
		}
		func_498(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_524();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_525(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(500564674 /* GXTEntry: "Gritty Fish Meat" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-875449072 /* GXTEntry: "Stringy Meat" */, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(1237770824 /* GXTEntry: "Animal Fat" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */);
						func_525(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */);
						func_525(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */);
						func_525(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */);
						func_525(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */);
						func_525(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_525(-566881549 /* GXTEntry: "Split Point Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(-566881549 /* GXTEntry: "Split Point Pamphlet" */);
						func_525(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_525(147796381 /* GXTEntry: "Express Explosive Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(147796381 /* GXTEntry: "Express Explosive Pamphlet" */);
						func_525(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */);
						func_525(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */);
						func_525(891318243 /* GXTEntry: "Cover Scent Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(891318243 /* GXTEntry: "Cover Scent Pamphlet" */);
						func_525(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-248960099 /* GXTEntry: "Bandolier" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_527();
						func_528(967523420);
						func_529();
						func_530();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_531(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_525(1030791766 /* GXTEntry: "Legendary Animal Map" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_532(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_532(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_533(304805134, 1, 1);
						if (!func_100(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_388(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_534();
						break;
					case 26:
						func_535();
						break;
					case 17:
						func_536(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_33())
						{
							func_537(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_538(-514575035, -1))
						{
							iVar15 = func_121();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_539(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_537(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_33())
						{
							func_537(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_540();
						break;
					case 37:
						func_541();
						if (func_32())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						func_542();
						break;
					case 43:
						func_543();
						break;
					case 44:
						if (!func_100(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_388(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_100(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_388(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_544();
						break;
					case 59:
						func_545();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_546();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_547();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_532(451, 0);
						}
						if (!func_548(-1992824800))
						{
							if (func_548(1520110311))
							{
								iVar16 = func_121();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_539(1937177603, iVar16, 1);
							}
						}
						if (func_549(4))
						{
							if (!func_550(684296857 /* GXTEntry: "Invitation from Jeremy Gill" */, 1, 0))
							{
								iVar17 = func_121();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_539(-1439688706, iVar17, 1);
							}
						}
						func_525(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_551(89200);
						func_551(2300);
						func_551(2300);
						break;
					case 68:
						func_552();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_553();
						func_551(-139100);
						break;
					case 69:
						if (func_100(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_551(-6000);
						}
						break;
					case 70:
						func_551(23400);
						func_551(1900);
						func_551(-15000);
						break;
					case 71:
						func_551(-5500);
						break;
				}
				break;
			case 8:
				switch (func_106(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_554();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_555();
						break;
					case 66:
						func_556();
						func_557();
						break;
					case 67:
						if (!func_558(6))
						{
							func_559(6);
						}
						if (!func_558(3))
						{
							func_559(3);
						}
						if (func_33())
						{
							func_537(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_100(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_560(0);
							func_551(40500);
						}
						else
						{
							func_560(0);
							func_551(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						switch (func_517(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_561(iParam0);
		func_562();
		switch (iVar0)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 4:
						func_563(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_563(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_563(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_563(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_563(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_563(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_563(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_564(iParam0);
						func_563(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_563(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_563(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_550(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_525(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_563(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_563(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_563(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_564(iParam0) == 0)
						{
							func_563(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_563(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_108(((*Global_1347702)[func_106(iParam0) /*49*/])->f_12, 536870912))
				{
					func_565(11, 1);
				}
				switch (func_106(iParam0))
				{
					case 109:
						func_563(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_565(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_563(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_563(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_563(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_563(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_566(0, 10, 11, joaat("CABR01")))
				{
					func_563(iParam0, func_564(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 7, 11, joaat("CACR02")))
				{
					func_563(iParam0, func_567(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 8, 11, joaat("CACR03")))
				{
					func_563(iParam0, func_567(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 11, 11, joaat("CACR01")))
				{
					func_563(iParam0, func_567(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 12, 11, joaat("CACR04")))
				{
					func_563(iParam0, func_567(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_311(iParam0) == 0)
			{
				if (func_568(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_568(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_569(func_27(iParam0), func_568(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_106(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_571(func_570(Global_1879514->f_1));
						if (iVar0 == 8 && func_106(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_107(func_106(iParam0)) && func_108(((*Global_1347702)[func_106(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_392(bParam2, iVar20);
		}
	}
	func_572(1);
	if ((bVar13 || func_523()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_389(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_573(iParam0);
	Global_40.f_11864[iVar0 /*2*/] = iParam1;
}

int func_390(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_574(iParam0) & 2147418112, 16);
}

void func_391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0) & 65535;
	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	func_575(iParam0, (iVar1 + iVar0));
}

void func_392(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_576(&Global_0, 8);
	}
	if (!func_331() || func_24() != -1)
	{
		return;
	}
	func_576(&Global_0, 1);
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (func_31())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

struct<2> func_394(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_395()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

Vector3 func_396(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_43(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_397(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST((Global_1393237->f_11[iVar0 /*30*/])->f_3, vParam0) < fParam3)
		{
			func_577(iVar0);
		}
		iVar0++;
	}
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_578(Global_1393447, 1);
	func_579();
	func_580();
	func_581((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_395() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_582();
		if (iParam1 == -1)
		{
			if (func_583(iParam0, 1))
			{
				func_584(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_583(iParam0, 2))
			{
				func_584(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_583(iParam0, 4))
			{
				func_584(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_585(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_586(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_586((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_399(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_587(iVar0) == iParam0 && func_588(iVar0) == iParam1)
		{
			func_589(iVar0, -1);
			func_590(iVar0, 0);
			func_591(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
				}
				MAP::REMOVE_BLIP(Global_36307[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

void func_400(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_497(iParam0, 0);
}

void func_401(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 36:
			iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
			iVar1 = joaat("SIX_POINT_CABIN");
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
				iVar1 = joaat("HANGING_DOG_RANCH");
			}
			else
			{
				iVar0 = -2100600611; /* GXTEntry: "The Laramie Gang" */
				iVar1 = 151695316;
			}
			break;
		case 9:
			iVar0 = 1143368244; /* GXTEntry: "Lemoyne Raiders" */
			iVar1 = joaat("shady_belle");
			break;
		case 79:
			iVar0 = -1797026825; /* GXTEntry: "The Murfree Brood" */
			iVar1 = joaat("BEAVER_HOLLOW");
			break;
		case 125:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = joaat("TWIN_ROCKS");
			break;
		case 127:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = joaat("thieves_landing");
			break;
		case 118:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = joaat("FORT_MERCER");
			break;
		case 114:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = joaat("GAPTOOTH_BREACH");
			break;
		case 129:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1351740867;
			break;
	}
	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(iVar0, iVar1);
}

void func_402(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_592(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_568(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_27(iParam0), func_106(iParam0), func_517(iParam0), func_568(iParam0), Global_36);
		}
	}
	func_497(iParam0, 1);
	bParam1 = bParam1;
}

int func_403(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_593(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_404(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_594(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_568(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_595(func_106(iParam0));
			}
			if (func_24() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_568(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_568(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_596(iParam0);
	if (!func_37(func_26(0)))
	{
		func_497(iParam0, 3);
		func_499(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_502(1);
		}
		func_597(iParam0, -1);
		if (bParam1 && !func_212(2))
		{
			func_576(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_598(&(Global_1347343->f_11), 536870912);
			func_599(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_600(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_601(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_520(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_522();
				switch (iVar1)
				{
					case 0:
						func_602(0);
						break;
					case 1:
						func_602(1);
						break;
					case 2:
						func_602(2);
						break;
					case 3:
						func_602(3);
						break;
					case 4:
						func_602(4);
						break;
					case 5:
						func_602(5);
						break;
					case 6:
						func_602(5);
						break;
					case 7:
						func_602(7);
						break;
					case 8:
						func_602(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_106(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_602(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_106(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_602(11);
						break;
					default:
						iVar1 = func_522();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_603(0);
									break;
								case 1:
									func_603(1);
									break;
								case 2:
									func_603(2);
									break;
								case 3:
									func_603(3);
									break;
								case 4:
									func_603(4);
									break;
								case 5:
									func_603(5);
									break;
								case 6:
									func_603(5);
									break;
								case 7:
									func_603(7);
									break;
								case 8:
									func_603(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_572(1);
	}
	else
	{
		func_597(iParam0, -1);
		func_497(iParam0, 4);
	}
	func_519(iParam0, 0);
}

void func_405(int iParam0)
{
	int iVar0;

	if (func_604(iParam0))
	{
		return;
	}
	iVar0 = func_573(iParam0);
	func_605(iVar0, 16);
}

void func_406(var uParam0, bool bParam1, int iParam2)
{
	func_606(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_607(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_152(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_608(1))
						{
							func_152(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_608(1) || *uParam0 & 8192 != 0))
				{
					func_153(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_609(uParam0))
			{
				uParam0->f_15 = func_395();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_395() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_610(uParam0);
}

int func_407(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (bVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (bVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_611(bParam0, uParam1, bVar2))
			{
				return 0;
			}
			if (func_293(bParam0, bVar2) <= func_612(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_408(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_613(iParam2, 1, 1, 1, 0))
	{
		func_152(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_614(uParam1, 1);
	func_615();
}

int func_409(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_616(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_617(uParam1);
			if (func_618(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_619(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_614(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_614(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_410(bool bParam0, bool bParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_620(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_617(uParam2);
		if (func_618(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_619(uParam2)
				{
					func_614(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_411(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_611(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_619(uParam1)
		{
			fVar3 = func_617(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_412(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_413(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_621(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_421(uParam2, bParam1))
			{
				func_614(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_414(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_622(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_421(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_614(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_415(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_623(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_614(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_614(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_624(bParam1, vVar0, vVar4))
					{
						func_614(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_614(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_624(bParam1, vVar0, vVar7))
					{
						func_614(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_416(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_611(bParam0, uParam1, &(Global_1935630->f_34[iVar0])) || bParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_625(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_626(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = bParam0;
						return 1;
					}
				}
			}
			if (func_627(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_628(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
			else if (func_629(uParam1, bParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = bParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_417(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return 1;
	}
	return 0;
}

int func_418(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_419(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar0, 1, 1))
			{
				return 1;
			}
			bVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(bVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(bVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(bVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(bVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(bParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_630(bVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_631(bVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == bVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_420(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_421(var uParam0, bool bParam1)
{
	if (func_632(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return 1;
	}
	return 0;
}

int func_422(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return 1;
		}
		if (func_173(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_423()
{
}

int func_424(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (bVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(bVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_633(bVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_395();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(bVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(bVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_294(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_395();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_425()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_395() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_426(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return 0;
	}
	fVar0 = func_612(uParam0);
	if (uParam0->f_12 > func_250(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_634(bParam1);
	iVar1 = func_635(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(bParam1, uParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_427(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_636(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_428(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_637(bParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(bParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(bVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			return 1;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return 0;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_638(uParam1, bParam0))
					{
						if (func_294(bVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_429(bool bParam0, var uParam1)
{
	if (!func_639(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_430(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_431(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_432(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_395();
	}
	else if (func_395() - uParam1->f_4) > func_640(uParam1)
	{
		return func_641(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_433(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_434(int iParam0)
{
	if (!func_345(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_387(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_435(int iParam0)
{
	if (func_349(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_436(var uParam0)
{
	if (func_185(&(uParam0->f_7), 1))
	{
		return 1;
	}
	return 0;
}

float func_437(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_642(vVar0, vParam1);
}

int func_438(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_439(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_440(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_643(iParam3, &vVar0, &Var3, &uVar6);
	if (func_644(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_443(int iParam0)
{
	return iParam0 != 0;
}

bool func_444(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_445(int iParam0)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_645(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

bool func_446(int iParam0)
{
	return iParam0 != 0;
}

int func_447(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0, 2))
	{
		return 0;
	}
	if (func_124(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_126(iParam0)))
	{
		return 1;
	}
	if (func_123(iParam0, 1) && !bParam1)
	{
		func_646(iParam0, 128);
		return 1;
	}
	func_127(iParam0, 129);
	func_445(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_126(iParam0));
	func_125(iParam0, 0);
	return 1;
}

bool func_448(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_449(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_450(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_451(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_452(int iParam0)
{
	func_648(func_647(iParam0));
}

bool func_453(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_454(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_455(int iParam0)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	if (!func_228(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_456(int iParam0, bool bParam1)
{
	if (!func_349(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_649(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_458(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_347(iParam0);
	iVar1 = func_456(iParam0, 0);
	func_351(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

void func_459(int iParam0)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_568(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_311(iParam0) == 3)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_568(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_569(func_27(iParam0), func_568(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_498(iParam0);
	func_499(1);
	func_502(0);
	func_497(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_512(1);
			func_513(15, 0, 1);
			break;
		case 4:
			func_513(10, 0, 1);
			break;
		case 8:
			func_513(10, 0, 1);
			break;
		case 9:
			func_513(10, 0, 1);
			break;
		case 2:
			func_513(10, 0, 1);
			break;
		case 6:
			func_513(10, 0, 1);
			break;
		case 5:
			func_513(10, 0, 1);
			break;
	}
	func_572(1);
}

void func_460(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_260(iParam0) && !func_594(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_568(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_260(iParam0))
	{
		iParam2 = -1;
	}
	if (func_311(iParam0) == 3 || (func_311(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_568(iParam0))))
	{
		func_569(func_27(iParam0), func_568(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_25(0, 1, 0)) && !func_78(&Global_1935630, 32768))
		{
			iVar0 = func_520(iParam0);
			if (iVar0 != -1)
			{
				func_521(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_522();
				if (iVar0 != -1)
				{
					func_521(0);
				}
			}
		}
	}
	func_497(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_499(1);
		func_502(0);
		func_572(1);
	}
	func_519(iParam0, 1);
	func_498(iParam0);
}

bool func_461(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_462(var uParam0)
{
	return uParam0;
}

void func_463(int iParam0)
{
	if (!func_650(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_464(int iParam0)
{
	func_651();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_465()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

bool func_466(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_652(bParam0);
}

int func_468(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_476(iParam1, 1, 0) };
		iParam3 = func_653(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_655(iParam1, iParam2, func_654(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_656(1, (func_24() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_654(iParam3, 1) /*11*/])
			{
				func_657(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_658(32768) && iParam1 != &Global_1946804->f_57[func_654(iParam3, 1) /*11*/])
			{
				func_659();
				func_657(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_657(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_660(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_657(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_661(0);
			func_662(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_657(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_469(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_664(0), &Var5, bParam1);
}

void func_470(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_24() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(bParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(bParam1, Global_1347477->f_190);
			}
			func_665(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_666(bParam1, 29, bVar4, 1, 0);
			func_666(bParam1, 31, bVar4, 1, 0);
			func_666(bParam1, 30, bVar4, 1, 0);
			func_666(bParam1, 22, bVar4, 1, 0);
			func_666(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_658(32768) && func_667(1108822547, 8)) && func_668(10, iParam3))
	{
		func_669(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_670(iVar1, 1);
			if (func_667(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_668(iVar1, iParam3))
				{
				}
				else if ((func_667(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_667(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_666(bParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_671(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_666(bParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_667(iVar3, 1))
							{
								func_672(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(bParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}

int func_471(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_472(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_673(bParam0, iParam1))
		{
			if (func_674(bParam0, iParam1))
			{
				if (func_675(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_676(bParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(bParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_473(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(bParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_474(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(bParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
	}
}

void func_475(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(bParam0, 41611, 1f);
	}
}

struct<5> func_476(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_677(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_678(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_480(joaat("Wardrobe"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("Wardrobe"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_679(bParam1) };
			if (bParam2 && func_680(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_478(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_478(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_479(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("Emote"):
			Var0.f_4 = -813824107;
			Var0 = { func_681(bParam1) };
			switch (func_682(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("Upgrade"):
			if (func_683(iParam0, -1823706425))
			{
				Var0 = { func_480(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_683(iParam0, -1483207246))
			{
				Var0 = { func_480(joaat("Wardrobe"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("Wardrobe"));
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_684(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_477(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_478(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_663(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_479(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_685(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_480(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_686(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_664(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_481(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_687(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_684(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_482(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_664(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_482(bool bParam0)
{
	if (func_24() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_664(bParam0));
}

int func_483(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 < 1)
	{
		return 1;
	}
	if (!func_688(iParam0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, bParam1, iParam2);
	return 1;
}

void func_484(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &bVar0, iParam0) && bVar0 < bParam1) && bVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_368(WEAPON::_0xD3750CCC00635FC2(iParam0), bParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_485(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_689(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		fVar1 = -1f;
		fVar2 = func_690(PED::_0x2BA9D7BF629F920C(bParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(bParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_691())
					{
						if (PED::IS_PED_FACING_PED(Global_35, bParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_486(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_369(bParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, bParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

var func_487(bool bParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(bParam0, uParam1);
}

var func_488(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_489(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_692(&((Local_398[iVar0 /*9*/])->f_1), &((Local_398[iVar0 /*9*/])->f_4), 2, iVar0);
				Local_398[iVar0 /*9*/] = joaat("g_m_m_unibanditos_01");
				Var1 = { func_247(4, iVar0) };
				(Local_501[iVar0 /*9*/])->f_1 = { Var1 };
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { func_247(3, iVar0) };
				(Local_435[iVar0 /*9*/])->f_1 = { Var1 };
				(Local_435[iVar0 /*9*/])->f_4 = Var1.f_3;
				Local_435[iVar0 /*9*/] = joaat("g_m_m_unibanditos_01");
				iVar0++;
			}
			break;
	}
}

int func_490(var uParam0)
{
	if (-1829635046 == func_693(81053684))
	{
		if (func_694(uParam0))
		{
			return 1;
		}
	}
	else if (func_695(-525676072, uParam0))
	{
		if (func_694(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_491()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_696();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		bVar1 = (3000 - iVar0);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 < 0)
	{
		iVar2 = MISC::ABSI(bVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = bVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + bVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(&Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_511(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_511(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_697())
		{
			func_698(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_699())
		{
			func_698(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_700())
		{
			func_698(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_701())
	{
		func_698(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_216(func_394(661720433), bVar1);
	iVar10 = func_696();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_493(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_702(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_494()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_495(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_24() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

void func_497(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_703(iParam0, iParam1);
}

int func_498(int iParam0)
{
	return func_705(func_704(iParam0));
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_361(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_214(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_500(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_236(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(joaat("BountyHuntersGlobalCooldown")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BountyHuntersGlobalCooldown")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BountyHuntersGlobalCooldown"), iVar0);
	func_502(bParam0);
	return 1;
}

void func_501()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_349(iVar17))
		{
			iVar18 = func_347(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_706(&(Global_1359489->f_55));
	if (func_707(1777191912, 1))
	{
		func_708(1777191912, 1, 0);
	}
}

int func_502(bool bParam0)
{
	if (!bParam0 && func_236(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BountyHuntersGlobalCooldown"), bParam0, 0);
	return 1;
}

void func_503(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_575(iParam0, (func_574(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_504()
{
	return func_709() > 0;
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_710(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_710(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_710(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_710(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_711(1);
			break;
		case 16:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_710(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_712(146))
			{
				func_710(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_711(1);
			break;
		case 76:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_713() == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_710(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_711(0);
			break;
		case 15:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_710(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_710(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_710(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_713() == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_710(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_710(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_710(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_711(0);
			break;
		case 6:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_710(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_710(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_714(51))
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_710(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (iParam2 == 1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_100(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_713() == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_713() == 0)
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_710(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_710(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_710(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_710(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_710(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_710(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_711(1);
			break;
		case 3:
			if (func_32())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					func_710(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				func_710(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_506()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_507(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_710(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_710(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_100(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_712(26))
			{
				func_710(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_710(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (&Global_1357515 == -1)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_710(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_712(54))
			{
				func_710(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_712(39))
			{
				func_710(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_564(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_710(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_710(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_712(43))
			{
				func_710(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_712(41))
			{
				func_710(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_712(49))
			{
				func_710(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_710(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_710(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_100(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_710(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_710(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_710(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_710(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_711(1);
			break;
		case 67:
			func_710(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_710(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_711(0);
			break;
		case 70:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_710(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_710(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_710(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_712(78))
			{
				func_710(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_712(79))
			{
				func_710(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_710(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_710(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (&Global_1357515 == -1)
				{
					func_710(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_712(101))
			{
				func_710(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_710(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_712(103))
			{
				func_710(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_712(104))
			{
				func_710(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_710(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_712(109))
			{
				func_710(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_710(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_712(110))
			{
				if (&Global_1357515 == 0)
				{
					func_710(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_710(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_710(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_710(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_712(117))
			{
				func_710(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_712(118))
			{
				func_710(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_712(121))
			{
				func_710(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_712(122))
			{
				func_710(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_710(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_710(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_710(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_710(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_710(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_710(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (&Global_1357515 == -1)
				{
					func_710(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_710(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_710(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_710(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_712(136))
			{
				func_710(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_710(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_710(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_710(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_710(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_710(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_710(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_712(147))
			{
				func_710(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_712(148))
			{
				func_710(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_710(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_712(149))
			{
				func_710(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_710(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_508(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_715(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_564(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_106(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_106(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_509(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_716(iParam0);
	uVar3 = func_717(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_121();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_718(iParam0, 1);
			if (func_719(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_720(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_721(1, iParam0);
				}
				else
				{
					func_722(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_510(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_511(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_512(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_723(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_514(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_516(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36615 && func_724(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_725(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_726(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_727(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_726(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_517(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_728(func_109(iParam0));
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_519(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_729(iParam0))
	{
		if (bParam1)
		{
			func_730(-525676072);
		}
		else
		{
			func_731(-525676072);
		}
	}
}

int func_520(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_106(iParam0);
			return func_732(iVar0);
		case 8:
			iVar1 = func_106(iParam0);
			if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_733(iVar1);
			}
			break;
	}
	return -1;
}

void func_521(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_734(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_735();
		Global_1898077->f_9 = func_736(Global_1894899->f_2);
		func_737(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_522()
{
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_100(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_100(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_100(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_100(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_100(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_100(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_523()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_331())
	{
		return 0;
	}
	if (!func_100(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_100(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_100(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_100(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_100(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_100(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_100(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_100(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_100(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_100(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_100(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_100(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_100(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_100(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_100(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_100(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_100(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_100(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_100(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_100(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_100(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_100(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_100(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_100(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_100(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_524()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_525(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_739(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_740(iParam0, &bVar0, iParam1))
	{
		return 0;
	}
	func_741(iParam0, bParam2);
	iVar2 = 0;
	if (func_742(iParam0, 0, 0) == 0)
	{
		if (func_743(iParam0))
		{
			iVar5 = func_744(iParam0);
			iVar6 = func_745(iVar5);
			iVar7 = func_746(iVar6) + 1;
			func_747(iVar5);
			if (func_748(38))
			{
				func_532(483, 0);
			}
			else
			{
				func_532(482, 0);
			}
			if (iVar7 == func_749(iVar6))
			{
				func_525(func_750(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_331() && func_751(4))
				{
					if (func_331() && (func_752(38) || func_748(38)))
					{
						func_754(38, func_750(iVar6), 0, 0, func_753(), 0, -1, 0);
						func_755(2);
					}
					else
					{
						func_754(38, func_750(iVar6), 0, 0, func_753(), 0, -1, 0);
						func_755(1);
					}
				}
			}
			else if (func_331() && func_751(4))
			{
				if (func_331() && (func_752(38) || func_748(38)))
				{
					func_754(38, 0, 0, 0, func_753(), 0, -1, 0);
					func_755(2);
				}
				else
				{
					func_754(38, 0, 0, 0, func_753(), 0, -1, 0);
					func_755(1);
				}
			}
			if (func_331() && func_751(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_331() && (func_752(38) || func_748(38)))
					{
						func_756(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_756(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_678(iParam0) == joaat("clothing"))
	{
		if ((!func_757(iParam0, 866047851) && !func_757(iParam0, -1979000645)) && !func_757(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_758(iParam0, 8388608) && !func_328(28))
	{
		func_759(28);
	}
	if (!bVar3)
	{
		if (func_757(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_682(iParam0) == -1447088266)
			{
				iVar1 = func_761(func_760(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_24() == -1)
					{
						func_762(iVar1);
					}
					if (func_482(0) && func_365(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_483(iParam0, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_24() == -1)
					{
						func_762(iParam0);
					}
					if (func_482(0) && func_365(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_483(iVar1, bVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_678(iParam0) == joaat("weapon"))
		{
			if (!func_763(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_678(iParam0) == joaat("ammo") && func_688(iParam0))
		{
			if (!func_764(iParam0, &bVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_757(iParam0, 866047851))
		{
			func_765(iParam0);
		}
		else if (func_757(iParam0, 2000026003))
		{
			func_766(iParam0);
		}
		else if (func_757(iParam0, -103750053))
		{
			func_216(func_767(joaat("CLAWS_COLLECTED")), bVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_216(func_215(joaat("collected"), joaat("ALLIGATOR_TOOTH")), bVar0);
		}
		else if (func_757(iParam0, -121341956) && !func_757(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != 1993672959)
			{
				if (func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_532(498, 0);
				}
			}
			if (func_757(iParam0, -2017733358) || func_757(iParam0, -1369131378))
			{
				func_768(iParam0);
			}
		}
		else if (func_757(iParam0, -136654233))
		{
			if (func_757(iParam0, -1021472396))
			{
			}
		}
		else if (func_757(iParam0, -1466706512) && func_757(iParam0, 1147021565))
		{
			func_532(484, 0);
		}
		else if (func_757(iParam0, 1147021565) && func_757(iParam0, -524514947))
		{
		}
		else if (func_757(iParam0, 554195525))
		{
		}
		else if (func_757(iParam0, 589988438))
		{
			if (func_769())
			{
				func_770(joaat("reward_small"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_757(iParam0, 787083290) && func_757(iParam0, 949916894))
		{
			func_771(iParam0);
		}
		else if (func_757(iParam0, -1718133314))
		{
			func_772(iParam0);
		}
		else if (func_757(iParam0, -1738650224))
		{
			func_773(iParam0);
		}
		else if (func_757(iParam0, -1112814642) && func_757(iParam0, 949916894))
		{
			func_774(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_757(iParam0, 1841149704))
		{
			func_775();
		}
		else if (func_757(iParam0, 606799272))
		{
			func_776(iParam0, iParam1);
			func_777(iParam0);
		}
		else if (func_757(iParam0, -1112814642) && func_757(iParam0, -1697809989))
		{
			func_778(iParam0, 0, 0, 0);
		}
		else if (func_757(iParam0, -2017733358) || func_757(iParam0, -1369131378))
		{
			func_768(iParam0);
		}
		else if (func_757(iParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return 0;
			}
			func_779(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_757(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_550(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_525(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_550(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_525(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_550(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_525(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_550(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_525(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_550(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_525(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_550(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_525(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_757(iParam0, -839724752) && func_758(iParam0, 4))
		{
			if (!func_748(42))
			{
				func_780(iParam0);
			}
		}
		else if (func_757(iParam0, 1399091007))
		{
			func_781(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_757(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_525(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("bait_crickets");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("bait_worms");
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_fancy");
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_fancy");
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_fancy");
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_fancy");
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_plain");
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_plain");
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_plain");
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_plain");
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_poor");
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_sml_poor");
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_poor");
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("jbox_lrg_poor");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_759(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_468(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_782(&iVar9, 0))
				{
					func_365(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_24() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_468(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_532(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_783();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_784();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_785();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_786();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_787();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_788(499813453, 854119837, 0);
				func_789(499813453, 0);
				func_790(1);
				break;
			case 2127812557: /* GXTEntry: "Jack Hall Gang Map 2" */
				func_788(499813453, -1292544588, 0);
				func_789(499813453, 0);
				func_790(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_788(499813453, -1003325394, 0);
				func_789(499813453, 0);
				func_790(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_788(666607663, -335460405, 0);
				func_789(666607663, 0);
				func_791(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_788(666607663, 903797617, 0);
				func_789(666607663, 0);
				func_791(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_788(666607663, 669728650, 0);
				func_789(666607663, 0);
				func_791(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_788(-220219788, 1214120047, 0);
				func_789(-220219788, 0);
				func_792(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_788(-220219788, 655769340, 0);
				func_789(-220219788, 0);
				func_792(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_788(-220219788, 885316185, 0);
				func_789(-220219788, 0);
				func_792(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_788(218622660, -1491419385, 0);
				func_789(218622660, 0);
				func_793(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_788(218622660, 1809565830, 0);
				func_789(218622660, 0);
				func_793(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_788(390004462, -628873767, 0);
				func_789(390004462, 0);
				func_794(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_788(390004462, -405421956, 0);
				func_789(390004462, 0);
				func_794(2);
				break;
			case 2142623221: /* GXTEntry: "The Elemental Trail Map 3" */
				func_788(390004462, -1108972386, 0);
				func_789(390004462, 0);
				func_794(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_788(6410548, 1053716392, 0);
				func_789(6410548, 0);
				func_795(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_788(6410548, 806507056, 0);
				func_789(6410548, 0);
				func_795(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_788(6410548, 1571925350, 0);
				func_789(6410548, 0);
				func_795(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_788(6410548, 1330352282, 0);
				func_789(6410548, 0);
				func_795(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_797(242, func_796(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_797(240, func_796(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_797(241, func_796(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_798(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_532(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_532(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_532(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_525(func_799(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_525(func_800(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_328(1))
				{
					func_532(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_532(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_24() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_532(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (bVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_801(&iVar10);
		if (!func_802(iVar10, bVar0, iParam5))
		{
			return 0;
		}
		else if (!func_482(0))
		{
			return 1;
		}
		if (func_678(iParam0) == joaat("clothing"))
		{
			func_803(iParam0);
		}
		if (func_757(iParam0, -1979000645))
		{
			func_804(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_482(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_525(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_805(iVar2, 0);
		}
	}
	Var35 = { func_806(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, bVar0);
	}
	func_807(iParam0);
	if (fParam6 > 0f)
	{
		if (func_757(iParam0, -839724752))
		{
			func_808(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_809(iParam0, bVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_757(iParam0, 1989861793))
	{
		iVar0 = func_810(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_811(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_812(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_813(iVar14, iVar1);
					if (iVar15 != iParam0 && func_686(iVar15, 0))
					{
						if (func_814(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_815(iVar1);
				if (bVar13)
				{
					func_816(iParam0);
				}
				else
				{
					func_532(306, 0);
				}
			}
		}
	}
}

void func_527()
{
	if (func_24() != -1)
	{
		return;
	}
	func_817();
	func_818();
	func_819();
	func_820();
	func_821();
	func_822();
	func_823();
}

void func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_824(iParam0, 1, 1, -142743235, 1);
	if (func_825(iParam0))
	{
		func_826(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_654(func_827(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_828(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_829() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_830(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_830(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_831(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_831(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_831(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_831(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_831(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_831(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_831(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_831(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_831(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_832(iVar8, iVar0))
				{
					func_833(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_832(iVar8, iVar0))
		{
			func_833(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_529()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_832(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_833(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("base");
				func_833(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_530()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_531(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_100(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_100(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_260(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_707(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_532(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_835(iVar0, iVar1);
}

void func_533(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_654(iParam0, 1);
	func_836(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_836(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_657(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_836((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_836((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_534()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_535()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_536(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_476(iParam1, 1, 0) };
		iParam3 = func_653(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_837(iParam3);
	return func_468(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_537(int iParam0)
{
	int iVar0;

	if (!func_363(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_538(int iParam0, int iParam1)
{
	if (!func_838(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_839(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_840(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_539(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_838(iParam0))
	{
		return;
	}
	if (!func_246(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_839(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_538(iParam0, -1))
	{
		return;
	}
	else
	{
		func_841(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(0, 17);
		}
	}
}

void func_540()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_541()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

void func_542()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_543()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_544()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_545()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_546()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_547()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_548(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_549(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_550(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_678(iParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_842(iParam0, 1))
		{
			return false;
		}
	}
	return func_742(iParam0, 0, bParam2) >= iParam1;
}

void func_551(int iParam0)
{
	if (func_212(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_843(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_843(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_552()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_553()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_554()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_555()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_556()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_557()
{
	if (func_844() > 1)
	{
		func_845();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_532(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_532(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_532(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_532(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_532(452, 1);
		}
	}
}

bool func_558(int iParam0)
{
	return func_344(iParam0, 4, 1);
}

void func_559(int iParam0)
{
	func_846(iParam0, 4, 1);
}

void func_560(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_394(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_561(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_212(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_214(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_216(func_215(joaat("completed"), joaat("missions")), 1);
			iVar0 = func_106(iParam0);
			func_216(func_394(-634848880), 1);
			switch (func_732(iVar0))
			{
				case 0:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_216(func_215(joaat("completed"), joaat("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_216(func_215(joaat("completed"), joaat("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_106(iParam0);
			if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_216(func_394(-634848880), 1);
			}
			if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_216(func_215(joaat("completed"), joaat("missions")), 1);
				}
				else
				{
					func_216(func_215(joaat("completed"), joaat("RC")), 1);
				}
			}
			if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_733(iVar1))
				{
					case 0:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_216(func_215(joaat("completed"), joaat("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_216(func_215(joaat("completed"), joaat("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_108(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_216(func_215(joaat("completed"), joaat("RC_STRANDS")), 1);
				}
				else
				{
					func_216(func_215(joaat("completed"), joaat("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_562()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_847(64))
	{
		return;
	}
	else if (func_78(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_848()) || func_523())
	{
		return;
	}
	iVar0 = func_522();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_849(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_318(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("hud_toasts"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_318(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("hud_toasts"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_850(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_392(0, -1);
	}
	if (iVar2 > 0)
	{
		func_851("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_852(1, 0);
	Global_1956575->f_2 = 1;
}

void func_563(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_212(32768))
	{
		return;
	}
	func_853(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_854(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_564(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_855(iParam0);
}

int func_565(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_856(iParam0))
	{
		return 0;
	}
	if (!func_331())
	{
		return 0;
	}
	if (!func_857(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, bParam1);
	return 1;
}

int func_566(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_858())
	{
		iVar2 = func_858();
	}
	iVar5 = func_859(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_109(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_109(iVar6) == 0)
			{
				return func_860(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_109(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_109(iVar6) == 0)
			{
				return func_860(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_860(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_861(1330954593, 0, -1);
		case 1:
			return func_861(1330954593, 0, -1);
		case 2:
			return func_861(1330954593, 0, -1) * 2;
		case 4:
			return func_861(1330954593, 0, -1);
		case 5:
			return func_861(1330954593, 0, -1);
		case 6:
			return func_861(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_861(1330954593, 0, -1) * 3;
		case 9:
			return func_861(1330954593, 0, -1) * 3;
		case 10:
			return func_861(1330954593, 0, -1) * 3;
		case 11:
			return func_861(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_568(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_24() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

var func_570(int iParam0)
{
	char[] cVar0[8];

	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_715(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_106(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_566(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_571(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_862();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514->f_1) == 1)
			{
				func_565(5, 1);
			}
			else if (func_27(Global_1879514->f_1) == 8 && (func_108(((*Global_1347702)[func_106(Global_1879514->f_1) /*49*/])->f_12, 1) || func_108(((*Global_1347702)[func_106(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_565(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_572(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_574(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_575(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_576(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_577(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_159((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		func_863((Global_1393237->f_11[iParam0 /*30*/])->f_3, 0);
		PED::_0x9851DE7AEC10B4E1((Global_1393237->f_11[iParam0 /*30*/])->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0 /*30*/] = -15;
	(Global_1393237->f_11[iParam0 /*30*/])->f_2 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_3 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_6 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_9 = 0f;
	if (func_864(iParam0, 8388608))
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 8388608;
	}
	else
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 0;
		if (Global_1393237->f_11[iParam0 /*30*/])->f_17 != func_865()
		{
		}
		(Global_1393237->f_11[iParam0 /*30*/])->f_17 = func_865();
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_11 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_12 = 0;
	(Global_1393237->f_11[iParam0 /*30*/])->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_14[iVar0] = 0;
		iVar0++;
	}
	func_866(iParam0, 1);
	(Global_1393237->f_11[iParam0 /*30*/])->f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[0])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[0]);
		}
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[1])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[1]);
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1393237->f_11[iParam0 /*30*/])->f_21))
	{
		func_863((Global_1393237->f_11[iParam0 /*30*/])->f_3, 1);
	}
}

void func_578(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_579()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_867(iVar0, 128))
		{
			func_868(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_580()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_867(iVar0, 128) && func_867(iVar0, 1))
		{
			func_868(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_581(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_582()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_221(iVar0, 16777216))
		{
			if (!func_869(iVar0))
			{
				func_870(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_583(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_584(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_871(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_872(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_873(iVar0) < func_874(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_875(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_876(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_876(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_876(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_876(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_876(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_876(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_586(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_292();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_587(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_588(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

void func_589(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_590(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_591(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

bool func_592(int iParam0)
{
	return func_192(iParam0) == 0;
}

int func_593(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_594(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_311(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_595(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_877(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, joaat("toast_log_blips"));
}

void func_596(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_575(iParam0, func_574(iParam0) + 1);
}

int func_597(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_704(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_878(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_879(iVar0, iParam1);
	return iParam1;
}

void func_598(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_599(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_600(bool bParam0)
{
	func_880(bParam0);
	func_881(bParam0);
	func_882(bParam0);
	func_883(bParam0);
	func_884(bParam0);
	func_885(bParam0);
	func_886(bParam0);
	func_887(bParam0);
}

void func_601(bool bParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_532(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_532(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_888(1, bParam0, 1);
	func_787();
	Global_40.f_11095.f_43 = bParam0;
}

void func_602(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_889(Global_1898077->f_7, Global_1898077->f_3);
}

void func_603(int iParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_890(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_604(int iParam0)
{
	int iVar0;

	iVar0 = func_573(iParam0);
	return func_891(iVar0, 16);
}

void func_605(int iParam0, int iParam1)
{
	func_152(&((Global_40.f_11864[iParam0 /*2*/])->f_1), iParam1);
}

void func_606(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_892();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_893(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_607(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_608(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_894(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_609(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_24() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_895(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_895(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_635(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_610(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_896(uParam0);
	}
}

int func_611(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_635(bParam2);
	}
	else
	{
		iVar1 = func_634(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_635(bParam0);
	}
	else
	{
		iVar0 = func_634(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_583(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_612(var uParam0)
{
	return uParam0->f_26;
}

int func_613(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_614(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 134217728);
	}
	else
	{
		func_153(uParam0, 134217728);
	}
}

void func_615()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_616(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("WEAPON_LASSO") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == bParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_173(bVar0, bParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_488(bVar0, 0)))
		{
			if (func_897(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_617(var uParam0)
{
	return uParam0->f_17;
}

int func_618(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_583(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_619(var uParam0)
{
	return uParam0->f_18;
}

int func_620(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(bVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(bVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_488(bVar0, 0)))
		{
			if (func_314(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_621(var uParam0)
{
	return uParam0->f_23;
}

int func_622(var uParam0)
{
	return uParam0->f_21;
}

int func_623(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_624(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_898(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(bParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_625(bool bParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_899(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_626(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	bVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_627(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_369(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_628(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_369(bParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_629(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_369(bParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(bParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_630(bool bParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(bParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(bParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_631(bool bParam0, bool bParam1)
{
	if (PED::_0xB65A4DAB460A19BD(bParam0) == bParam1)
	{
		return 1;
	}
	if (func_900(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(bParam0) == bParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_632(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_633(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_294(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_634(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_635(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_636(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_630(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_173(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_173(bParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_637(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_894(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_638(uParam1, bVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_638(uParam1, bVar1))
				{
					if (func_294(bVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_638(var uParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_639(int iParam0)
{
	if (func_31())
	{
		return 0;
	}
	return func_100(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_640(var uParam0)
{
	return uParam0->f_20;
}

int func_641(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

float func_642(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_643(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_644(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_645(int iParam0)
{
	int iVar0;

	iVar0 = func_126(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_646(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_647(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_648(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

void func_649(int iParam0)
{
	int iVar0;

	if (!func_345(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_901(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

bool func_650(int iParam0)
{
	return func_902(iParam0, 2);
}

void func_651()
{
	Global_1911774 = 1;
}

void func_652(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_653(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_670(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_654(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_903();
	if (iParam2 == 39)
	{
		Var0 = { func_476(iParam0, 1, 0) };
		iParam2 = func_654(func_653(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_757(iParam0, 866047851) && func_904(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_658(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_905(func_670(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_906(iParam2);
	func_907(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_908(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_908(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_909(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_910(iParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_911(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_911(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_672(func_670(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_656(bool bParam0, bool bParam1, bool bParam2)
{
	func_912(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_665(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_913(Var0);
}

bool func_658(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_659()
{
	func_914(&(Global_1946804->f_2776));
	func_915(32768);
	func_672(1108822547, 8, 6);
}

int func_660(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_654(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_661(int iParam0)
{
	struct<4> Var0;

	if (func_916(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_917(Var0);
}

void func_662(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_917(Var0);
}

int func_663(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_480(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_664(bParam6), &Var0, 0);
	return uVar4;
}

int func_664(bool bParam0)
{
	if (func_24() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

void func_665(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_666(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_670(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_918(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(bParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(bParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_667(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_668(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_669(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_667(1108822547, 6))
	{
		if (bParam2)
		{
			func_666(bParam0, iVar0, func_24() != -1, 0, 0);
			func_671(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_672(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(bParam0, false, true, true, true, false);
}

int func_670(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_671(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_672(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_654(iParam0, 1) /*11*/])->f_10 && iParam1));
}

bool func_673(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_674(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_675(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_673(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_676(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

struct<4> func_677(bool bParam0)
{
	return func_480(joaat("character"), func_919(), -1591664384, bParam0);
}

int func_678(int iParam0)
{
	vector3 vVar0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_679(bool bParam0)
{
	int iVar0;

	iVar0 = func_664(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_480(923904168, func_677(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_480(923904168, func_677(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_480(923904168, func_677(bParam0), -740156546, 0);
}

int func_680(int iParam0, bool bParam1)
{
	if (func_682(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_920(joaat("UPGRADE_OFFHAND_HOLSTER"), 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_681(bool bParam0)
{
	int iVar0;

	iVar0 = func_664(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_480(271701509, func_677(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_480(271701509, func_677(bParam0), 12999093, 0);
}

int func_682(int iParam0)
{
	struct<2> Var0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_683(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_682(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_684(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_664(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_685(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_664(0);
	*uParam1 = { func_480(iParam0, func_679(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_687(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_688(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

float func_689(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_250(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_921(uParam0);
	}
	return func_250(uParam0);
}

float func_690(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_691()
{
	int iVar0;
	int iVar1;

	iVar0 = func_116(func_121());
	iVar1 = func_117(func_121());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_692(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_130(iParam2, iParam3) };
	*uParam1 = func_131(iParam2, iParam3);
}

int func_693(int iParam0)
{
	int iVar0;

	iVar0 = func_654(func_922(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_694(var uParam0)
{
	if (func_695(81053684, uParam0))
	{
		return 1;
	}
	if (func_695(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_695(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_654(func_922(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_682(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_696()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_923(661720433);
}

bool func_697()
{
	return Global_1347398->f_1 == 0;
}

void func_698(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_699()
{
	return Global_1347398->f_1 == 1000;
}

bool func_700()
{
	return Global_1347398->f_1 == 2000;
}

bool func_701()
{
	return Global_1347398->f_1 == 3000;
}

void func_702(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_703(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_924(iParam0);
	}
	else
	{
		func_925(iParam0, iParam1);
	}
	func_926();
}

int func_704(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_705(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_879(iParam0, Global_1898164->f_162);
	return 1;
}

void func_706(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_707(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_927(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_708(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_720(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_709()
{
	return Global_40.f_11095.f_35;
}

void func_710(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_928(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_711(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_711(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_928(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_929(1);
	}
}

bool func_712(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_713()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_38(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_122(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_714(int iParam0)
{
	if (!func_877(iParam0))
	{
		return 0;
	}
	return func_100(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_715(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_106(iParam0);
	}
	return -1;
}

int func_716(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_930(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_931(iVar6);
	}
	return iVar5;
}

int func_717(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_932(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_718(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_933(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_720(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_718(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_721(2, *uParam0);
		}
		else
		{
			func_722(2, *uParam0);
		}
	}
	func_934(uParam0);
}

void func_721(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_722(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_723(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_935(iParam0, iParam1, bParam2);
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_726(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_936();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_937(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_328(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_31())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_511(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_936();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_938(iVar1);
		func_940(func_939(), 0, 4000);
		func_941(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_942(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_216(func_394(joaat("honor_positive_total")), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_725(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_943(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_216(func_394(joaat("honor_negative_total")), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_725(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_943(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_394(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_565(10, 1);
	}
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_728(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_729(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_106(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_106(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_664(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_945(func_944(iParam0), 6);
}

void func_731(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_664(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_946(func_944(iParam0), 6);
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_734(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_735()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_737(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_738(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_739(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_947(iParam0) && func_948(iParam0))
		{
			func_949(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	return 1;
}

int func_740(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*bParam1 = iParam2;
	func_950(iParam0, bParam1);
	Var0 = { func_476(iParam0, 0, 1) };
	iVar5 = func_951(iParam0, &Var0, 0, 0);
	iVar6 = func_920(iParam0, 0);
	if ((iVar5 > 1 && !func_523()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_757(iParam0, -2051813666))
		{
			func_532(583, 1);
		}
		else
		{
			func_532(582, 0);
		}
	}
	if (func_952(iParam0, &Var0, *bParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*bParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_741(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_810(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_742(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_678(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_953(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_954(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam2), iParam0, 0);
	return iVar2;
}

bool func_743(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_744(iParam0) != 0;
}

int func_744(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_955())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_956(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_745(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_955())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_745(iVar0))
		{
			if (func_550(func_956(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_747(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_957(48);
	func_392(0, -1);
}

int func_748(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_100(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_749(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_750(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_751(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_100(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_752(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_107(iParam0))
	{
		return 0;
	}
	return func_260(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_753()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_550(func_958(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_754(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_331() && (func_752(38) || func_748(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_331() && (func_752(39) || func_748(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("dino_bones");
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_959(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_331() && (func_752(41) || func_748(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_331() && (func_752(49) || func_748(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("rock_carvings");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_959(iParam3, 20);
			iVar14 = joaat("taxidermy");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_960(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_961(iParam0, iVar13, iVar14))
	{
	}
	if (func_962(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_963(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_964(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_965(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_966(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_755(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_756(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_331() && (func_752(38) || func_748(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("dino_bones");
			if (func_331() && (func_752(39) || func_748(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("rock_carvings");
			if (func_331() && (func_752(49) || func_748(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("taxidermy");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_331() && (func_752(38) || func_748(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_318(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_968(func_750(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("dino_bones"))
	{
		if (func_331() && (func_752(39) || func_748(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("rock_carvings"))
	{
		if (func_331() && (func_752(49) || func_748(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_757(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_758(int iParam0, int iParam1)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_759(int iParam0)
{
	if (!func_441(iParam0))
	{
		return;
	}
	func_969(iParam0);
	func_970(iParam0);
}

int func_760(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_686(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_971(iVar0) || func_364(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_761(int iParam0, bool bParam1)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_762(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_363(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_763(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	bool bVar6;
	int iVar7;

	iVar0 = func_761(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_24() == -1)
		{
			func_762(iVar0);
			if (iParam1 == 1248274121)
			{
				func_972(iVar0);
			}
		}
		if (!func_952(iParam0, &uVar1, 1, 0, 0))
		{
			func_949(iParam0, 1, 0, bParam2, iParam1);
			bVar6 = func_973(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_365(iVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_365(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_365(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_31())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_367(iVar0))
				{
					func_365(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_365(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_974(Global_35, 2, 0, 1);
				if ((((func_363(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_550(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_363(iVar7) && func_550(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0))
				{
					if (!func_365(iVar0, bVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_365(iVar0, bVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_365(iVar0, bVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_532(480, 1);
	}
	return 1;
}

int func_764(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_688(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_363(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("WEAPON_BOW"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*bParam1 > 0)
	{
		iVar6 = *bParam1;
	}
	else if (*bParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*bParam1));
	}
	if (func_550(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		bVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		bVar0 = iVar5;
	}
	else
	{
		func_797(func_975(iParam0), func_796(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + bVar0))
	{
		if (func_24() == -1)
		{
			if (func_100(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_532(416, 0);
			}
		}
	}
	if (bVar0 == 0)
	{
		return 0;
	}
	if (func_482(0))
	{
		if (func_483(iParam0, bVar0, iParam2))
		{
			*bParam1 = bVar0;
			return 1;
		}
	}
	else
	{
		return func_802(iParam0, *bParam1, iParam2);
	}
	return 0;
}

void func_765(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_32()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_976(Global_35, iParam0, &uVar0))
		{
			func_468(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_787();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_787();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_787();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_785();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_783();
			break;
	}
}

void func_766(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_783();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_784();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_785();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_786();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_787();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_977();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_978();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_767(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_768(int iParam0)
{
	bool bVar0;

	bVar0 = func_757(iParam0, -2017733358);
	if (func_979() < 3)
	{
		if (bVar0)
		{
			if (func_981(func_980(iParam0), iParam0))
			{
				func_797(79, func_796(func_980(iParam0)), 1);
			}
			else
			{
				func_797(78, func_796(func_980(iParam0)), 1);
			}
		}
		else
		{
			func_797(80, func_796(func_982(iParam0)), 1);
		}
	}
}

int func_769()
{
	if (((((func_983(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_983(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_983(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_983(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_983(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_983(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return 1;
	}
	return 0;
}

int func_770(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_861(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_984(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_985(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_771(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_754(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_754(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_754(39, 0, 0, 0, 0, 0, 1, 0);
			func_756(39, 0, 0, 0, 0, -1, 0);
			func_987(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_754(41, 0, 0, 0, 0, 0, 1, 0);
			func_756(41, 0, 0, 0, 0, -1, 0);
			func_988(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_754(49, 0, 0, 0, 0, 0, 1, 0);
			func_756(49, 0, 0, 0, 0, -1, 0);
			func_989(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_754(43, 0, 0, -1791518714, func_990(1), 0, -1, 0);
			func_991(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_754(43, 0, 0, -2087881550, func_990(2), 0, -1, 0);
			func_991(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_754(43, 0, 0, 1908068621, func_990(4), 0, -1, 0);
			func_991(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_754(43, 0, 0, 1611247019, func_990(8), 0, -1, 0);
			func_991(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_754(43, 0, 0, 1319635688, func_990(16), 0, -1, 0);
			func_991(16);
			break;
	}
}

void func_772(int iParam0)
{
	if (func_992() == 1)
	{
		if (func_748(39))
		{
			func_532(342, 0);
		}
		else
		{
			func_532(343, 0);
			func_987(1);
		}
	}
	if (func_992() >= 30)
	{
		func_532(344, 0);
	}
	func_754(39, 0, 0, 0, 0, 0, -1, 0);
	func_756(39, 0, 0, func_992(), 30, 1, 0);
}

void func_773(int iParam0)
{
	if (func_993() == 1)
	{
		if (func_748(49))
		{
			func_532(409, 0);
		}
		else
		{
			func_532(410, 0);
			func_989(1);
		}
	}
	if (func_993() >= 10)
	{
		func_532(411, 0);
	}
	func_754(49, 0, 0, 0, 0, 0, -1, 0);
	func_756(49, 0, 0, func_993(), 10, 1, 0);
}

void func_774(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_532(437, 0);
			func_532(440, 0);
			func_994(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_754(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(-949689219, 20), 1, 0);
			func_986(1);
			func_102(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_994(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_754(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(-1248968496, 20), 1, 0);
			func_986(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_994(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_754(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(1706369307, 20), 1, 0);
			func_986(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_994(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_754(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(1520110311, 20), 1, 0);
			func_986(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_532(438, 0);
			func_994(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_754(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(-1992824800, 20), 1, 0);
			func_986(32768);
			break;
		default:
			func_532(439, 0);
			break;
	}
}

void func_775()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, true);
	}
}

void func_776(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_748(43))
		{
			if (iParam0 == 281887510)
			{
				func_532(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_532(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_532(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_532(400, 0);
			}
		}
		else if (func_757(iParam0, 412399755))
		{
			func_995(-1791518714);
			if (func_996() == 0)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_748(44))
		{
			if (iParam0 == -222563712)
			{
				func_532(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_532(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_532(401, 0);
			}
		}
		else if (func_757(iParam0, 709057512))
		{
			func_995(-2087881550);
			if (func_996() == 1)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_748(45))
		{
			if (iParam0 == 2116770557)
			{
				func_532(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_532(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_532(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_532(398, 0);
			}
		}
		else if (func_757(iParam0, -1478961327))
		{
			func_995(1908068621);
			if (func_996() == 2)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1000(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0)) >= 25)
					{
						func_1001(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0), 1);
						func_957(48);
					}
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_748(46))
		{
			if (iParam0 == 2085530337)
			{
				func_532(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_532(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_532(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_532(406, 0);
			}
		}
		else if (func_757(iParam0, -1238404098))
		{
			func_995(1611247019);
			if (func_996() == 3)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_748(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_532(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_532(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_532(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_532(403, 0);
			}
		}
		else if (func_757(iParam0, 1160548794))
		{
			func_995(1319635688);
			if (func_996() == 4)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_777(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_1000(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0)) >= 25)
		{
			func_1001(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("gator_eggs"), 0), 1);
			func_957(48);
		}
	}
}

void func_778(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("taxidermy"), -1160144609);
		if (func_550(func_1002(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1003(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1004(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_779(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_770(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_770(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_770(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_770(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_770(joaat("reward_billfold"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_770(joaat("reward_billfold_sml"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_billstack"):
			func_770(joaat("reward_billstack"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coin"):
			func_770(joaat("reward_coin"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coinpurse"):
			func_770(joaat("reward_coinpurse"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_770(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_coinstack"):
			func_770(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_moneyclip"):
			func_770(joaat("reward_moneyclip"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("money_moneystack"):
			func_770(joaat("reward_moneystack"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_1005())
			{
				func_770(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_770(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_770(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_770(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_770(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_770(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_770(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_770(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_770(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_770(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_770(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_770(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_770(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_780(int iParam0)
{
	if (func_748(41))
	{
		func_532(363, 0);
	}
	else
	{
		func_532(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_1006(-1865241121);
			func_1007(-642026005);
			func_1008(-642026005);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_1006(2117142684);
			func_1007(-940584364);
			func_1008(-940584364);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_1006(-1409326024);
			func_1007(1972645282);
			func_1008(1972645282);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_1006(-641744968);
			func_1007(1667205433);
			func_1008(1667205433);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_1006(-946988203);
			func_1007(1362715885);
			func_1008(1362715885);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_1006(-646136018);
			func_1007(1053540370);
			func_1008(1053540370);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_1006(-955835837);
			func_1007(-1100103852);
			func_1008(-1100103852);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_1006(-179276075);
			func_1007(-1409869209);
			func_1008(-1409869209);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_1006(-492711560);
			func_1007(-1760235357);
			func_1008(-1760235357);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_1006(1764383959);
			func_1007(-138366827);
			func_1008(-138366827);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_1006(317501533);
			func_1007(-1261163843);
			func_1008(-1261163843);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_1006(817753087);
			func_1007(-963523016);
			func_1008(-963523016);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_1006(576606016);
			func_1007(560825326);
			func_1008(560825326);
			func_392(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_1006(814934957);
			func_1007(858269539);
			func_1008(858269539);
			break;
	}
}

void func_781(int iParam0, int iParam1)
{
	var uVar0;

	func_1009(iParam0, iParam1, &uVar0);
}

int func_782(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1010("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1011(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1012(iVar0);
						if (*iParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_783()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_784()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_785()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_786()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_787()
{
	func_1013();
	func_1014();
	func_1015();
}

void func_788(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_789(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_967(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_790(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_791(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_792(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_793(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_794(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_795(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_796(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_797(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1016(iParam0, 1024))
	{
		return;
	}
	func_835(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_798(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1016(iParam0, 1024))
	{
		return;
	}
	func_835(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_799()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_955())
	{
		return func_800();
	}
	iVar4 = (func_955() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_955())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1017(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_956(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_800()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_955());
	return func_956(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_801(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_802(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_476(iParam0, 0, 1) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	return func_1018(iParam0, &Var5, &Var0, bParam1, iParam2, 0);
}

void func_803(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	switch (func_682(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_1019(81053684, 0) <= 0)
			{
				func_657(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("clothing_item_hat_pzero_000") || iParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
			{
				func_657(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1020(iParam0);
			if (func_1021(iVar0))
			{
				func_1022(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_657(30, iParam0, 0, 0, 0);
			}
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_657(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_829() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_657(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1023(-525676072, 0))
			{
				if (func_1024(-525676072, &iVar1))
				{
					func_657(33, iVar1, 0, 0, 0);
				}
			}
			func_657(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_1025(99217379))
		{
			func_468(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_759(24);
		if (func_782(&iVar2, 0))
		{
			func_365(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_804(int iParam0)
{
	if (func_757(iParam0, 943695443))
	{
		func_1026(0, iParam0);
	}
	else if (func_757(iParam0, -2096528786))
	{
		func_1026(1, iParam0);
	}
	else if (func_757(iParam0, -1094167013))
	{
		func_1026(2, iParam0);
	}
	else if (func_757(iParam0, 1936654645))
	{
		func_1026(3, iParam0);
	}
	else if (func_757(iParam0, 1306489306))
	{
		func_1026(4, iParam0);
	}
	else if (func_757(iParam0, 435762317))
	{
		func_1026(5, iParam0);
	}
	else if (func_757(iParam0, 1259363210))
	{
		func_1026(6, iParam0);
	}
	else if (func_757(iParam0, 881398259))
	{
		func_1026(7, iParam0);
	}
	else if (func_757(iParam0, -541549214))
	{
		func_1026(8, iParam0);
	}
	else if (func_757(iParam0, 130796156))
	{
		func_1026(-1, iParam0);
	}
}

int func_805(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1027(&Var4, 1356624740);
	return func_1028(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_806(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_686(iParam0, 0))
	{
		return Var0;
	}
	if (func_757(iParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_757(iParam0, -537818634))
			{
				return func_394(189951448);
			}
			else
			{
				return func_394(joaat("deadeye_items"));
			}
		}
	}
	else if (func_757(iParam0, -537818634))
	{
		return func_394(joaat("medicine_items"));
	}
	if (func_757(iParam0, 2084895747))
	{
		return func_394(joaat("lock_breaker_items"));
	}
	return Var2;
}

void func_807(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_24() == -1)
			{
				if (func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_532(109, 1);
				}
			}
			break;
	}
}

void func_808(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1030(func_1029(0));
	func_843(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1031(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_809(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_686(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (bParam1 == 0)
	{
		return;
	}
	if (!func_1032())
	{
		func_1033(iParam0, bParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(bParam1);
	StringCopy(&cVar2, func_1034(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1034(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_758(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_678(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1035(iParam0, &Var7, iVar11, iVar10, 0, joaat("ui_itemviewer")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_330(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_796(iParam0)), iVar1), iVar12);
	if (((((bParam1 == 1 || func_757(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == -1424823393) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_796(iParam0));
	}
	func_843(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_810(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_811(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_812(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_813(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_814(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1036(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && func_1036(iParam0, Var2, 1))
				{
					if (func_1037(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1037(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_532(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_815(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_816(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476: /* GXTEntry: "Special Horse Medicine Pamphlet" */
			iVar0 = 307;
			break;
		case -1704241585: /* GXTEntry: "Special Horse Reviver Pamphlet" */
			iVar0 = 308;
			break;
		case -1267972061: /* GXTEntry: "Horse Ointment Pamphlet" */
			iVar0 = 309;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case 890514341: /* GXTEntry: "Horse Meal Pamphlet" */
			iVar0 = 311;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case 1882019322: /* GXTEntry: "Special Bitters Pamphlet" */
			iVar0 = 313;
			break;
		case 807302083: /* GXTEntry: "Special Snake Oil Pamphlet" */
			iVar0 = 314;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case -378547623: /* GXTEntry: "Potent Herbivore Bait Pamphlet" */
			iVar0 = 316;
			break;
		case 829545206: /* GXTEntry: "Potent Predator Bait Pamphlet" */
			iVar0 = 317;
			break;
		case 891318243: /* GXTEntry: "Cover Scent Pamphlet" */
			iVar0 = 319;
			break;
		case 431374225: /* GXTEntry: "Dynamite Arrow Pamphlet" */
			iVar0 = 320;
			break;
		case 1619534881: /* GXTEntry: "Fire Arrow Pamphlet" */
			iVar0 = 321;
			break;
		case -755457379: /* GXTEntry: "Improved Arrow Pamphlet" */
			iVar0 = 322;
			break;
		case 2141714005: /* GXTEntry: "Poison Arrow Pamphlet" */
			iVar0 = 323;
			break;
		case 1015404643: /* GXTEntry: "Small Game Arrow Pamphlet" */
			iVar0 = 324;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case joaat("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case -1740272183: /* GXTEntry: "Homing Tomahawk Pamphlet" */
			iVar0 = 328;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case -1724192342: /* GXTEntry: "Improved Tomahawk Pamphlet" */
			iVar0 = 330;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			iVar0 = 331;
			break;
		case -566881549: /* GXTEntry: "Split Point Pamphlet" */
			iVar0 = 332;
			break;
		case 147796381: /* GXTEntry: "Express Explosive Pamphlet" */
			iVar0 = 333;
			break;
		case -120865369: /* GXTEntry: "Incendiary Buckshot Pamphlet" */
			iVar0 = 334;
			break;
		case 1158808845: /* GXTEntry: "Explosive Slug Pamphlet" */
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_532(iVar0, 0);
	}
}

void func_817()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1038(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1039();
		}
		return;
	}
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1040();
	if (MISSIONDATA::_0x57E798B54C45EE1A(joaat("nbd1")) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1038(1);
}

void func_818()
{
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_525(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_819()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1041(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1041(1);
}

void func_820()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1042(15000, 0, 0, 0, 1);
			func_1041(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_853(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1041(1);
}

void func_821()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_550(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0) && !func_260(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_525(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1043(1))
			{
				func_793(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_550(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0) && !func_260(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_525(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1043(2))
			{
				func_793(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1043(4))
		{
			func_793(4);
		}
		if (func_1043(0))
		{
			func_1044(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_550(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0))
			{
				func_824(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_550(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0))
			{
				func_824(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, -142743235, 0);
			}
		}
		if (func_1043(1))
		{
			func_1044(1);
		}
		if (func_1043(2))
		{
			func_1044(2);
		}
		if (func_1043(4))
		{
			func_1044(4);
		}
		if (!func_1043(0))
		{
			func_793(0);
		}
	}
}

void func_822()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_100(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1045() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_762(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_365(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1045() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1046(-2055673461 /* GXTEntry: "Pearl Grip" */, Var1, 1423542233);
		func_1046(-202131179 /* GXTEntry: "Long Barrel" */, Var1, -1264898804);
		func_1046(2013836545 /* GXTEntry: "Gold" */, Var1, 1592019450);
		func_1046(1497476650 /* GXTEntry: "Gold" */, Var1, 1117400455);
		func_1046(1063571467 /* GXTEntry: "Gold" */, Var1, 1150213537);
		func_1046(2107224237 /* GXTEntry: "Gold" */, Var1, 1598825281);
		func_1046(1747981656 /* GXTEntry: "Gold" */, Var1, -712527121);
		func_1046(-1371140647 /* GXTEntry: "Baroque" */, Var1, 454332195);
		func_1046(-19142973 /* GXTEntry: "Gold" */, Var1, 256105670);
		func_1046(-2074737817 /* GXTEntry: "Gold" */, Var1, -1328061889);
		func_1046(-1114256243 /* GXTEntry: "Baroque" */, Var1, -782241404);
		func_1046(-1653277288 /* GXTEntry: "Gold" */, Var1, 1669853467);
		func_1046(1869398132 /* GXTEntry: "Baroque" */, Var1, -1559225678);
		func_1046(459868358 /* GXTEntry: "Gold" */, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_491())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_363(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_328(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_328(24) && func_363(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_363(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_328(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_823()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_824(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_953(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_809(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_550(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_806(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_742(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_742(iParam0, 0, 0) - iParam1) < 0)
		{
			func_824(iParam0, func_742(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_678(iParam0) == joaat("weapon"))
	{
		if (!func_1047(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1048(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_809(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1049(iParam0, iParam1);
	return 1;
}

int func_825(int iParam0)
{
	switch (func_682(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_826(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_682(iParam0))
	{
		case -2061583405:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1050(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1051();
	}
	if (bParam1)
	{
		func_1052(0, 0);
	}
}

int func_827(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_476(iParam0, 1, 0) };
	return func_653(Var0.f_4);
}

void func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_24() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_654(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_908(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_829()
{
	return Global_1946804->f_1;
}

int func_830(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1053(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1055(uParam0, func_1054(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_654(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1056(iVar3) && func_1057(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_909(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_831(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_832(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_831(iParam0, iParam1) };
	return vVar0.x;
}

void func_833(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_834(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1058(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1059(iParam0))
	{
		return 0;
	}
	if (func_1060(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1016(iParam0, 1)) || func_212(32768))
	{
		if (!func_1016(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1061())
	{
		return 0;
	}
	return 1;
}

void func_835(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_836(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_837(int iParam0)
{
	func_908(Global_1946804->f_1497.f_1[func_654(iParam0, 1) /*3*/], 2, 6);
	func_908(Global_1946804->f_1378.f_1[func_654(iParam0, 1) /*3*/], 2, 6);
}

bool func_838(int iParam0)
{
	return iParam0 != 0;
}

int func_839(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_838(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_840(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_842(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_953(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1010("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1011(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_363(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1012(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1012(iVar1);
	}
	return 0;
}

var func_843(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1062(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_844()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1063(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1064(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_845()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1063(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1064(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1064(iVar1), true);
		}
		iVar0++;
	}
}

void func_846(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_349(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_847(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_848()
{
	return (func_78(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_dump_body")) > 0);
}

int func_849(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_24() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_686(iVar0, 0))
	{
		return 0;
	}
	if (!func_1065(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1066(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_757(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_476(iVar0, 0, 1) };
	iVar10 = func_1067(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1068(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1069(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_525(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1042(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_850(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_843(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

var func_851(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_852(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_853(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_984(iParam0, sParam4, iParam5);
	}
	func_985(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_854(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1070())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("hud_toasts"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("hud_toasts"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1070())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_568(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_106(iParam0);
	if (func_27(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1071(1, iVar1);
					func_1071(8, iVar1);
					func_1071(7, iVar1);
					break;
				case 12:
					func_1071(6, iVar1);
					break;
				case 53:
					func_1071(3, iVar1);
					func_1071(7, iVar1);
					func_1071(4, iVar1);
					break;
				case 20:
					func_1071(8, iVar1);
					break;
				case 19:
					func_1071(1, iVar1);
					func_1071(2, iVar1);
					break;
				case 24:
					func_1071(3, iVar1);
					func_1071(9, iVar1);
					func_1071(20, iVar1);
					break;
				case 28:
					func_1071(1, iVar1);
					break;
				case 34:
					func_1071(23, iVar1);
					func_1071(2, iVar1);
					func_1071(18, iVar1);
					break;
				case 29:
					func_1071(0, iVar1);
					func_1071(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1071(0, iVar1);
					func_1071(3, iVar1);
					func_1071(2, iVar1);
					func_1071(11, iVar1);
					func_1071(6, iVar1);
					func_1071(25, iVar1);
					func_1071(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1071(5, iVar1);
					break;
				case 63:
					func_1071(1, iVar1);
					func_1071(3, iVar1);
					break;
				case 37:
					func_1071(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_566(0, 10, 11, joaat("CABR01")))
			{
				func_1071(7, iVar1);
				func_1071(4, iVar1);
			}
			else if (iParam0 == func_566(0, 7, 11, joaat("CACR02")))
			{
				func_1071(8, iVar1);
				func_1071(15, iVar1);
			}
			else if (iParam0 == func_566(0, 8, 11, joaat("CACR03")))
			{
				func_1071(3, iVar1);
			}
			else if (iParam0 == func_566(0, 11, 11, joaat("CACR01")))
			{
				func_1071(6, iVar1);
				func_1071(3, iVar1);
			}
			else if (iParam0 == func_566(0, 12, 11, joaat("CACR04")))
			{
				func_1071(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1072()));
	if (!func_312(629))
	{
		func_532(629, 0);
	}
}

int func_855(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_856(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_857(int iParam0, int iParam1, int iParam2)
{
	if (!func_856(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_858()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_859(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1073(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_858())
	{
		return -1;
	}
	iVar0 = func_859(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_703(iVar1, 0);
	func_575(iVar1, 0);
	func_1074(iVar1, 0);
	func_1075(iVar1, 0);
	func_1076(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1077(iVar1, iParam4);
	}
	return iVar1;
}

int func_861(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_550(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_686(iVar25, 0) && func_757(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_862()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1078(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1079(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_863(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_159(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_1080(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_864(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_583((Global_1393237->f_11[iParam0 /*30*/])->f_10, iParam1);
}

int func_865()
{
	return 0;
}

void func_866(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

bool func_867(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_868(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_869(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_870(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_871(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_872(int iParam0)
{
	if (!func_218(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_873(int iParam0)
{
	if (func_218(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_874(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_875(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_876(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_876(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1081(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_24() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

bool func_877(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_878(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_109(iParam0);
		func_1082((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_879(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1083((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1083(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_497(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_880(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1084(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_881(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1084(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_882(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1084(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_883(bool bParam0)
{
	func_1084(Global_1956612, bParam0);
}

void func_884(bool bParam0)
{
	func_1084(&(Global_1415412->f_3), bParam0);
}

void func_885(bool bParam0)
{
	if (func_1085(Global_1934051->f_33))
	{
		func_1086(Global_1934051->f_33, 7148155);
	}
	func_1084(&(Global_1934051->f_33), bParam0);
}

void func_886(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1088(func_1087(iVar0));
		if (iVar1 != 0)
		{
			func_1086(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1084((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_887(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_589(iVar0, -1);
		func_590(iVar0, 0);
		func_591(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_888(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

void func_889(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_890(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

bool func_891(int iParam0, int iParam1)
{
	return func_583((Global_40.f_11864[iParam0 /*2*/])->f_1, iParam1);
}

int func_892()
{
	if (func_1089())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_893(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_894(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_895(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_896(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_153(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_152(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_897(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_314(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_898(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_899(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_900(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || !PED::IS_PED_HUMAN(bParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

bool func_902(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_903()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_904(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_905(int iParam0)
{
	func_672(iParam0, 8, 6);
}

void func_906(int iParam0)
{
	func_1090(&(Global_1946804->f_2589), iParam0);
}

void func_907(int iParam0, int iParam1)
{
	func_1091(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_908(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_909(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_682(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_668(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_907(iVar1, iVar3);
		}
	}
	if (func_1025(-1586649372) && func_668(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_907(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
			}
			func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1092(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1092(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_682(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_757(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_682(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_682(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_682(&(uParam0->f_1[iVar1 /*3*/])) || func_757(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_910(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1093(0);
	if (iParam2 != 0 && func_1094(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1057(iParam0, func_670(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_911(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_24() != -1;
	iVar7 = func_1093(0);
	if (func_658(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_670(iVar0, 1);
			if (func_667(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_667(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1095(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1096(uParam0);
				if (iVar3 > 0)
				{
					if (!func_658(524288))
					{
						func_665(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_670(iVar0, 1);
							if (func_667(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_667(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1095(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_907(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_915(524288);
				}
			}
		}
	}

void func_912(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1097(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1098(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1099(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1099(Global_40.f_7729);
				Global_1946804->f_1378 = func_1099(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1100(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1052(0, 1);
	}
}

void func_913(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1101(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1102(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_665(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1101(Param0))
			{
				return;
			}
			func_1102(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_665(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_662(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_914(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_915(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_916(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_917(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1101(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1101(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1102(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_665(8);
}

int func_918(int iParam0)
{
	int iVar0;

	iVar0 = func_682(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

struct<4> func_919()
{
	struct<4> Var0;

	return Var0;
}

int func_920(int iParam0, bool bParam1)
{
	if (func_688(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_664(bParam1), iParam0, 0);
}

var func_921(var uParam0)
{
	return uParam0->f_25;
}

int func_922(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_653(iVar0);
}

var func_923(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_394(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_924(int iParam0)
{
	int iVar0;

	iVar0 = func_438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1103(iVar0);
}

int func_925(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1104(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_926()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_927(int iParam0)
{
	int iVar0;
	int iVar1;

	func_933(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_928(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_929(1);
	}
}

void func_929(bool bParam0)
{
	if (bParam0)
	{
		func_152(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_153(&(Global_40.f_12018.f_42), 1);
	}
}

int func_930(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case joaat("flow"):
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case joaat("base"):
			return 1;
		case 1871598:
			return 9;
		case joaat("event"):
			return 6;
		case 1059981727:
			return 2;
		case joaat("griefing"):
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_932(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_933(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1105(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_934(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_935(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_936()
{
	int iVar0;

	iVar0 = func_709();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_937(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1106(MISC::ABSF(fVar1) < 1f, func_1106(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_939()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_940(int iParam0, bool bParam1, int iParam2)
{
	func_1107((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1108(iParam0);
}

void func_941(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1109(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_942(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1110(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1111(iVar5, &iVar2, &iVar0))
			{
				if (!func_686(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1112(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_678(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_936() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_936() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1113();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_945(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_946(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_947(int iParam0)
{
	return func_678(iParam0) == joaat("weapon");
}

int func_948(int iParam0)
{
	var uVar0;

	if (func_24() != -1)
	{
		return 0;
	}
	if (func_758(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_952(iParam0, &uVar0, 1, 0, 0);
	}
	return func_550(iParam0, 1, 0);
}

void func_949(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_678(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_761(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_364(iVar0))
	{
		if (func_24() == -1)
		{
			func_762(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_742(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_809(iParam0, bParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_950(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_757(iParam0, 58855631))
	{
		func_1066(iParam0, -915411861, &iVar0, 1);
		*bParam1 = (*bParam1 * iVar0);
	}
}

int func_951(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_664(bParam3), iParam0);
}

int func_952(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1114(&iParam0);
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		bParam3 = true;
	}
	if (func_947(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_679(0) };
			Var4.f_9 = -1591664384;
			if (!func_478(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_479(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_680(iParam0, 1))
			{
				if (!func_478(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_479(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_1115(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_951(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_663(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam4), iParam0, 0);
	}
	if ((iVar28 + bParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_953(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_678(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_757(iParam0, 1399091007))
	{
		func_1009(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_954(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1116(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1117(&Var0, func_679(0));
	}
	if (!func_1118(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1012(iVar14);
	return uVar15;
}

int func_955()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_956(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_957(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1119(iParam0);
	fVar1 = func_1120(iParam0);
	if ((Global_1347477->f_117 || !func_328(31)) || !func_1121(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1122(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1123(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_843(MISC::_CREATE_VAR_STRING(6, func_1124(iParam0), fVar1), "itemtype_textures", func_1125(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_958(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_959(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1126(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_960(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_753() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1127(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1128(), 12);
			}
			break;
		case joaat("dino_bones"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_992() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1129(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_992(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1130(), 13);
			}
			break;
		case joaat("rock_carvings"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_993() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1131(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_993(), 10);
			}
			break;
		case joaat("taxidermy"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_959(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_961(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("dino_bones"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("rock_carvings"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_962(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_963(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_964(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1132(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_550(iVar2, 1, 0) || func_1134(func_1133(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_968(func_1132(iVar0))), func_968(func_1132(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("dino_bones"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_992() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1135(iVar0)), func_1135(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1129() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1135(iVar0)), func_1135(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1135(iVar0)), func_1135(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1002(iParam3, func_1136(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_998(iVar2) - iParam7) >= func_959(iParam3, func_1137(iVar0));
				}
				else
				{
					bVar1 = func_998(iVar2) >= func_959(iParam3, func_1137(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_998(iVar2) + iParam7) >= func_959(iParam3, func_1137(iVar0));
			}
			else
			{
				bVar1 = func_998(iVar2) >= func_959(iParam3, func_1137(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1138(iVar2)), func_1138(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1139(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1140(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1140(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("rock_carvings"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_993() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1141(iVar0)), func_1141(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1131() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1141(iVar0)), func_1141(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1141(iVar0)), func_1141(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("taxidermy"))
		{
			iVar2 = func_1002(iParam3, func_1136(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_998(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1142(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1142(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1143(iVar2)), func_1143(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return 1;
}

int func_965(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1130() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("taxidermy"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return 1;
}

int func_966(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1144(0) == 1 || func_1144(0) == 8) || func_1144(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("dino_bones") || iParam2 == 1995362678) || iParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_967(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_968(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

void func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_970(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1145(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1146(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1146(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1146(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1147(1);
			break;
		case 34:
			func_1148(1);
			break;
		case 35:
			func_1149(1);
			break;
		case 36:
			break;
		case 37:
			func_1150(0);
			break;
		case 38:
			func_1151(0);
			break;
		case 39:
			func_1152(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_532(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_532(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_532(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_532(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_24() == -1)
			{
				if (!func_1025(99217379) || func_1153(99217379) == 2110595215)
				{
					if (func_31())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_550(iVar0, 1, 0))
					{
						func_802(iVar0, 1, 752097756);
					}
					func_468(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_550(1013902307, 1, 0))
				{
					func_802(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_550(1013902307, 1, 0))
				{
					func_802(1013902307, 1, 752097756);
				}
				if (!func_550(142640135, 1, 0))
				{
					func_802(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_550(786809402, 1, 0))
				{
					func_802(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_550(786809402, 1, 0))
				{
					func_802(786809402, 1, 752097756);
				}
				if (!func_550(-518019409, 1, 0))
				{
					func_802(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1154();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_971(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_972(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_121();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_973(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1155(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_974(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_975(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_328(50))
			{
				if (!func_328(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_328(51))
			{
				if (!func_328(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_976(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_686(iParam1, 0))
	{
		return 0;
	}
	if (func_678(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_24() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(bParam0);
	if (func_682(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_827(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_757(iParam1, 866047851))
	{
		iVar5 = func_654(iVar4, 1);
		if (func_904(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(bParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_682(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_757(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(bParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_695(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(bParam0);
				iVar10 = func_1095(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1095(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_682(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_757(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536; /* GXTEntry: "You are currently not wearing any boots." */
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_977()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_978()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_979()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_550(func_1156(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

int func_981(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == 425319238)
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == -1540119664)
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == -390982951)
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == -2054602073)
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_550(iVar0, 1, 0) && func_550(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1157(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return 0;
}

void func_984(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_843(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_985(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		bVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1070())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		bVar1 = (bVar1 + iVar2);
		func_843(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1158(iVar0);
			func_1159(iVar0, 0, 0);
		}
		func_843(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", bVar1), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		bVar1 = iParam0;
	}
	if (bVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(bVar1, iParam4);
		func_216(func_394(1644987397), bVar1);
	}
}

void func_986(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_987(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_988(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_989(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = 2116770557; /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_998(iVar12);
		iVar8 = func_999(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_991(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_992()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1160(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("dino_bones"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_993()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("rock_carvings"), 0);
}

int func_994(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1142(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1142(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1142(iVar0))
		{
			*sParam2++;
		}
		if (func_1142(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1142(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1142(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1142(iVar0))
		{
			*sParam2++;
		}
		if (func_1142(iVar1))
		{
			*sParam2++;
		}
		if (func_1142(iVar0) && func_1142(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1142(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1142(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1142(iVar0))
		{
			*sParam2++;
		}
		if (func_1142(iVar1))
		{
			*sParam2++;
		}
		if (func_1142(iVar2))
		{
			*sParam2++;
		}
		if ((func_1142(iVar0) && func_1142(iVar1)) && func_1142(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1142(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1142(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1142(iVar0))
		{
			*sParam2++;
		}
		if (func_1142(iVar1))
		{
			*sParam2++;
		}
		if (func_1142(iVar2))
		{
			*sParam2++;
		}
		if (func_1142(iVar3))
		{
			*sParam2++;
		}
		if (((func_1142(iVar0) && func_1142(iVar1)) && func_1142(iVar2)) && func_1142(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_995(int iParam0)
{
	if (!func_1161(iParam0))
	{
		func_1163(func_1162(iParam0));
	}
}

int func_996()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1161(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_997(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = 2116770557; /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_998(iVar12);
		iVar8 = func_999(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_998(int iParam0)
{
	int iVar0;

	if (func_550(iParam0, 1, 0))
	{
		iVar0 = func_742(iParam0, 0, 0);
	}
	return iVar0;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case 2116770557: /* GXTEntry: "Gator Egg" */
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1000(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1001(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1002(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1126(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1003(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1002(iParam1, 5) || iParam0 == func_1002(iParam1, 6)) || iParam0 == func_1002(iParam1, 7)) || iParam0 == func_1002(iParam1, 8)) || iParam0 == func_1002(iParam1, 9))
	{
		func_994(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_754(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_756(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1004(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1002(iParam1, 5) || iParam0 == func_1002(iParam1, 6)) || iParam0 == func_1002(iParam1, 7)) || iParam0 == func_1002(iParam1, 8)) || iParam0 == func_1002(iParam1, 9))
	{
		if (func_994(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_754(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_756(51, 0, 0, iVar0, func_959(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_754(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_756(51, 0, 0, iVar0, func_959(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1005()
{
	if (func_260(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1006(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1007(int iParam0)
{
	if (!func_1164(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1008(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1009(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case 2120467495: /* GXTEntry: "Opened Repeater Cartridges" */
			*iParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_1010(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_664(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1011(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1012(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_1013()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1165())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1166(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1166(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1167();
	fVar2 = func_1168();
	fVar3 = func_1169();
	fVar4 = func_1170();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1171()));
	fVar7 = (func_1166(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1172(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1173(3, fVar9, fVar9 > 100f);
	return func_1174(fVar7, -100f, 100f);
}

float func_1014()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1165())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1166(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1166(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1167();
	fVar2 = func_1168();
	fVar3 = func_1169();
	fVar4 = func_1170();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1171()));
	fVar7 = (func_1166(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1172(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1173(2, fVar9, fVar9 > 100f);
	return func_1174(fVar7, -100f, 100f);
}

float func_1015()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1165())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1166(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1175())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1176())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1166(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1167();
	fVar2 = func_1168();
	fVar3 = func_1169();
	fVar4 = func_1170();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1171()));
	fVar7 = (func_1166(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1172(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1173(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1166(0);
	}
	return func_1174(fVar7, -100f, 100f);
}

bool func_1016(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1017(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1018(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_686(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_952(iParam0, uParam2, bParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_664(0), uParam1, uParam2, iParam0, uParam2->f_4, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1019(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1177();
			}
			break;
	}
	return 0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229: /* GXTEntry: "The Ruffian" */
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_1021(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1022(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1021(iParam0))
	{
		return;
	}
	if (func_1178(iParam0))
	{
		return;
	}
	if (!func_1179(iParam0))
	{
		func_1180(iParam0, 1, 0);
	}
	iVar0 = func_1099(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1181(iParam0, 512))
		{
			func_657(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1182() && !bParam1) && !func_25(0, 0, 1))
	{
		func_851(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1183(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(1, 4);
		}
	}
}

bool func_1023(int iParam0, bool bParam1)
{
	return func_1019(iParam0, 0) < func_1184(iParam0, bParam1);
}

int func_1024(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1025(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_654(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_654(iParam0, 1) /*11*/];
}

void func_1026(int iParam0, int iParam1)
{
	if (func_757(iParam1, 130796156))
	{
		func_1185(iParam1, 0);
	}
	else if (func_757(iParam1, 930141731))
	{
		func_1185(iParam1, 1);
		func_1186(iParam0);
	}
}

void func_1027(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1028(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1187(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1188(uParam2, iParam0, Var1);
	return 1;
}

int func_1029(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1031(int iParam0)
{
	var uVar0;

	if (!func_1189(iParam0, &uVar0, joaat("inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		return joaat("_placeholder");
	}
	return uVar0;
}

bool func_1032()
{
	return !&Global_1911774;
}

void func_1033(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = bParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1034(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1035(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1036(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_24() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1190(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1037(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_24() != -1)
	{
		return false;
	}
	if (func_1190(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1038(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_525(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1039();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1191(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_528(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_824(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_1193(146323340, func_1192());
		Var0 = { func_1194() };
		if (func_1195(&Var0) == -1387633835)
		{
			func_1196(&Var0);
			func_1197(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("a_c_horse_tennesseewalker_chestnut");
		iVar9 = 1;
		func_1198(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1199(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_1200(iVar6, iVar7);
				func_1201(iVar6, iVar8);
				func_1202(iVar6, iVar9);
				func_1203(iVar6, 0);
				if (func_1204(iVar6))
				{
					func_1205(iVar6);
				}
				iVar10 = func_1206(iVar8);
				func_1207(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_1039()
{
	if (!func_1208(-1898635967, func_1192(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1208(146323340, func_1192(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1040()
{
	func_537(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_537(joaat("WEAPON_SHOTGUN_PUMP"));
	func_537(joaat("WEAPON_RIFLE_VARMINT"));
}

void func_1041(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_525(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(1566032147 /* GXTEntry: "Special Bitters" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(1237770824 /* GXTEntry: "Animal Fat" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_824(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 1, -142743235, 1);
		func_824(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 1, -142743235, 1);
		func_824(1566032147 /* GXTEntry: "Special Bitters" */, 3, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_824(1237770824 /* GXTEntry: "Animal Fat" */, 5, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_824(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("a_c_horse_tennesseewalker_chestnut");
		iVar3 = 1;
		func_1198(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1199(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_1200(iVar0, iVar1);
				func_1201(iVar0, iVar2);
				func_1202(iVar0, iVar3);
				func_1203(iVar0, 0);
				if (func_1204(iVar0))
				{
					func_1205(iVar0);
				}
				iVar4 = func_1206(iVar2);
				func_1207(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1039();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_1042(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1209(iParam0);
	if (bParam3)
	{
		func_850(iParam0, sParam1, iParam2);
	}
}

bool func_1043(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1044(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1045()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1010("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1011(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_479(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1012(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1012(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1046(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1210(Param1, iParam5, &Var5, 0))
	{
		func_481(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1018(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1211(Var19, 1);
}

int func_1047(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1116(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1117(&Var0, func_679(0));
	}
	if (!func_1118(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1011(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_481(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1012(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_1048(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_476(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1212(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_480(iParam0, Var0, Var0.f_4, bParam4) };
	return func_481(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1049(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_757(iParam0, 606799272))
		{
			func_1213(iParam0, iParam1);
		}
		if (func_757(iParam0, -1112814642) && func_757(iParam0, -1697809989))
		{
			func_778(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1050(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1214(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_682(iParam0) != -999503751)
		{
			func_1215(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_682(iParam0) != -999503751)
	{
		func_1215(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1216(iParam0, 1);
	return 1;
}

void func_1051()
{
	int iVar0;

	if (func_24() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_1052(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1217(0);
	}
	if (bParam0)
	{
		func_665(8);
		func_665(512);
	}
	else
	{
		func_665(8);
		func_665(16);
	}
}

int func_1053(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	if (func_24() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1055(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1218(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_670(iVar0, 1);
			if (func_668(iVar0, iParam1))
			{
				vVar4 = { func_831(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_667(iVar7, 4))
				{
					func_672(iVar7, 4, 6);
				}
			}
			else
			{
				func_671(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1056(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_24() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1219(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1057(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_1058(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1059(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1016(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1016(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1060(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1016(iParam0, 65536) && !func_1016(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1016(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1016(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1061()
{
	return Global_1905944->f_5694;
}

void func_1062(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1063(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1065(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_947(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_1066(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1067(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1114(&iParam0);
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	iVar0 = func_951(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_663(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_757(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_1220(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == joaat("currency_cash") || &Var0[iVar32 /*2*/] == joaat("currency_gold_bar"))
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_810(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_813(iVar62, iVar61);
					if (func_686(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1068(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1068(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1220(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == joaat("currency_cash") || &Var0[iVar32 /*2*/] == joaat("currency_gold_bar"))
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1069(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1221(1);
}

int func_1070()
{
	if (func_32())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1071(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1222(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_531(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1222(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_531(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1072()
{
	return Global_40.f_4283.f_325;
}

bool func_1073(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1074(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1075(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1076(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_1077(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_1078(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_37(iParam0))
	{
		return 0;
	}
	uVar0 = func_570(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1079(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

int func_1080(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1081(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

void func_1082(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_110(iParam0);
	*uParam1 = func_238(iParam0);
	*uParam2 = func_728(iParam0);
}

void func_1083(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_1084(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_589(*uParam0, -1);
		func_590(*uParam0, 0);
		func_591(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_1085(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_1086(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

int func_1089()
{
	switch (Global_1935630->f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1090(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1223(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1223(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1224(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1091(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1225(uParam0, 1))
	{
		func_1226(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_1092(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_907(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_907(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_907(iVar2, iVar0);
		}
	}
}

int func_1093(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1094(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1095(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_654(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_658(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_1096(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1097(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_24() == -1)
	{
		func_833(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1227(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1098(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229 /* GXTEntry: "The Ruffian" */;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

void func_1100(int iParam0, bool bParam1, int iParam2)
{
	func_1228(&(Global_1946804->f_1378), iParam0);
	func_1229(2, iParam0, 6);
	if (bParam1)
	{
		func_1052(0, 1);
	}
}

bool func_1101(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1102(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_1103(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1104(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_1105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

float func_1106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1107(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1230(bParam1);
	}
}

void func_1108(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1109(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1110(int iParam0)
{
	vector3 vVar0;

	if (!func_1126(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1111(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1126(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1112(int iParam0)
{
	return iParam0;
}

int func_1113()
{
	int iVar0;

	iVar0 = func_936();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1114(int iParam0)
{
	if (!func_686(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1115(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_476(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_477((375 + iVar29), 1);
		if (func_478(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_479(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

struct<14> func_1116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1117(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1118(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_664(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1119(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1231(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1231(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1231(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_328(18);
		case 2:
			return func_328(20);
		case 1:
			return func_328(19);
		default:
			break;
	}
	return 1;
}

int func_1122(int iParam0)
{
	return func_1232(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1123(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_328(31))
	{
		return;
	}
	iVar0 = func_1122(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1122(iParam0);
	if (func_1233(iParam0) && func_1234(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1235(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1236(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_532(func_1237(iParam0), 0);
					}
					func_1238(iParam0, iVar2, iVar3);
					func_1239(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1124(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("itemtype_player_stamina");
		case 0:
			return joaat("itemtype_player_health");
		case 2:
			return joaat("itemtype_player_deadeye");
		default:
			break;
	}
	return 0;
}

int func_1126(int iParam0, var uParam1)
{
	if (!func_1240(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1127()
{
	return func_1241(Global_40.f_12018);
}

int func_1128()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_958(iVar1);
		if (func_550(iVar2, 1, 0) || func_1134(func_1133(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1129()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1242(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("dino_bones"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1130()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1139(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1131()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("rock_carvings"), 0);
}

int func_1132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1133(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1134(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557: /* GXTEntry: "Gator Egg" */
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1139(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1140(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1142(int iParam0)
{
	if (func_1243(iParam0) && func_550(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1244(iParam0) && func_1245(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1143(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_796(iParam0));
}

int func_1144(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1145(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1146(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1147(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1148(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1149(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1150(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1151(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1152(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1153(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_654(iParam0, 1) /*3*/]);
}

void func_1154()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1246();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_762(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_802(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_762(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_802(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1155(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_1157(int iParam0)
{
	return func_1247(iParam0, -1);
}

void func_1158(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1248((Global_40.f_4283.f_325 + iParam0));
}

void func_1159(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1070())
	{
		func_843(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_843(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1160(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1161(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1162(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1163(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1164(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1165()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1166(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1167()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1249(13);
	iVar1 = func_1250(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1168()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1169()
{
	if (func_32())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1170()
{
	if (Global_40.f_39 == joaat("player_three"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1171()
{
	return Global_1955565->f_3;
}

void func_1172(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1251(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1173(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1251(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

float func_1174(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1175()
{
	return func_1249(12) <= -99f;
}

bool func_1176()
{
	return func_1249(12) >= 99f;
}

int func_1177()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_682(iVar1) == -999503751)
		{
			if (func_1252() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1178(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	if (func_1181(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1179(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	if (func_1181(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1180(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1021(iParam0))
	{
		return;
	}
	if (!func_1179(iParam0))
	{
		func_1183(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_392(1, 4);
			}
		}
		if ((!func_1182() && !bParam1) && !func_25(0, 0, 1))
		{
			func_851(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1253(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1181(int iParam0, int iParam1)
{
	if (!func_1021(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1182()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1183(int iParam0, int iParam1)
{
	if (!func_1021(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1184(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1185(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1254(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_759(50);
			}
			else
			{
				func_759(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_759(51);
			}
			else
			{
				func_759(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1255(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_783();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_783();
			}
			break;
		case 3:
			func_759(24);
			if (bParam1)
			{
				if (!func_1255(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_783();
				}
			}
			break;
	}
}

void func_1186(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1256(0))
			{
				iVar0++;
			}
			if (func_1256(2))
			{
				iVar0++;
			}
			if (func_1256(4))
			{
				iVar0++;
			}
			if (!func_1257(16))
			{
				if (iVar0 == 1)
				{
					func_1258();
					func_532(456, 1);
					func_1259(16);
				}
			}
			if (!func_1257(32))
			{
				if (iVar0 >= 3)
				{
					func_1258();
					func_532(456, 1);
					func_1259(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1256(1))
			{
				iVar0++;
			}
			if (func_1256(3))
			{
				iVar0++;
			}
			if (func_1256(7))
			{
				iVar0++;
			}
			if (!func_1257(1))
			{
				if (iVar0 == 1)
				{
					func_1260();
					func_532(457, 1);
					func_1259(1);
				}
			}
			if (!func_1257(2))
			{
				if (iVar0 >= 3)
				{
					func_1260();
					func_532(457, 1);
					func_1259(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1256(5))
			{
				iVar0++;
			}
			if (func_1256(6))
			{
				iVar0++;
			}
			if (func_1256(8))
			{
				iVar0++;
			}
			if (!func_1257(4))
			{
				if (iVar0 == 1)
				{
					func_1261();
					func_532(455, 1);
					func_1259(4);
				}
			}
			if (!func_1257(8))
			{
				if (iVar0 >= 3)
				{
					func_1261();
					func_532(455, 1);
					func_1259(8);
				}
			}
			break;
	}
}

void func_1187(var uParam0)
{
	func_1027(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1027(uParam0, 617531372);
	}
	else
	{
		func_1027(uParam0, 291123060);
	}
}

void func_1188(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1262(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1189(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1190(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_1191(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_824(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1263(iParam0, &uVar18);
	func_1264(iParam0, &uVar18, &iVar34, 1);
	if (func_829() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1265(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_826(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_824(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_682(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1265(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1265(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1265(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1265(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1265(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_826(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_654(func_827(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1266(&(Global_1946804->f_1616));
	func_830(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_831(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_831(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_831(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_831(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_831(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_831(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_831(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_831(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_831(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_832(&(iVar0[iVar36]), iVar35))
			{
				func_826(func_1267(iVar35), 1, 1);
				func_1268(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1218(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_833(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1020(iParam0))
	{
		if (!func_1269(8))
		{
			if (func_829() == -2125499975)
			{
				if (bVar17)
				{
					func_830(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1228(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1229(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_830(&(Global_1946804->f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1228(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1229(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1270(Global_40.f_7729, 4096);
					func_1183(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1271(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_830(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
	func_830(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

struct<4> func_1192()
{
	struct<4> Var0;

	Var0 = { func_677(0) };
	return func_480(856287005, Var0, -218846335, 0);
}

int func_1193(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_686(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_663(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1272(&uVar7);
					if (func_481(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1194()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1273(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1273(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1273(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1273(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1273(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1273(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1195(var uParam0)
{
	return uParam0->f_1;
}

void func_1196(var uParam0)
{
	func_1274(uParam0);
	func_1276(uParam0, func_1275(-1346384396));
	func_1277(uParam0, func_1275(-712836614));
	func_1278(uParam0, func_1275(-1629133289));
	func_1279(uParam0, func_1275(1302066700));
	func_1280(uParam0, func_1275(599669344));
	func_1281(uParam0, func_1275(-1555511632));
}

void func_1197(struct<6> Param0)
{
	if (!func_1282(Param0.f_4, 1))
	{
	}
	if (!func_1282(Param0, 1))
	{
	}
	if (!func_1282(Param0.f_2, 1))
	{
	}
	if (!func_1282(Param0.f_5, 1))
	{
	}
	if (!func_1282(Param0.f_3, 1))
	{
	}
	if (!func_1282(Param0.f_1, 1))
	{
	}
}

int func_1198(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_331())
	{
		if (func_506())
		{
			bVar0 = false;
			if (!func_100(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_328(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1283();
				*iParam1 = func_1284();
				*iParam2 = func_1285();
				return 1;
			}
			else
			{
				*iParam0 = func_1286();
				*iParam1 = func_1287();
				*iParam2 = func_1288();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_100(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1289();
				*iParam1 = func_1290();
				*iParam2 = func_1291();
				return 1;
			}
			else
			{
				*iParam0 = func_1292();
				*iParam1 = func_1293();
				*iParam2 = func_1294();
				return 1;
			}
		}
	}
	else if (func_506())
	{
		*iParam0 = func_1295();
		*iParam1 = func_1296();
		*iParam2 = func_1297();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1298();
		*iParam1 = func_1299();
		*iParam2 = func_1300();
		return 1;
	}
	return 0;
}

int func_1199(int iParam0)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_1200(int iParam0, int iParam1)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1201(int iParam0, int iParam1)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1202(int iParam0, int iParam1)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1203(int iParam0, int iParam1)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1204(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1302(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_677(0) };
	if (func_1303(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1205(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1304(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_481(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1206(int iParam0)
{
	if (iParam0 == joaat("a_c_horse_mp_mangy_backup"))
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return 1538827865 /* GXTEntry: "American Paint~n~Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -1792561227 /* GXTEntry: "American Paint~n~Tobiano Coat" */;
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return 1033678910 /* GXTEntry: "American Paint~n~Splashed White Coat" */;
		case joaat("a_c_horse_americanpaint_greyovero"):
			return -1942141178 /* GXTEntry: "American Paint~n~Grey Overo Coat" */;
		case joaat("a_c_horse_americanstandardbred_black"):
			return 671599957 /* GXTEntry: "American Standardbred~n~Black Coat" */;
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return -1554935503 /* GXTEntry: "American Standardbred~n~Buckskin Coat" */;
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return 694610769 /* GXTEntry: "American Standardbred~n~Palomino Dapple Coat" */;
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return 1941463607 /* GXTEntry: "American Standardbred~n~Silver Tail Buckskin Coat" */;
		case joaat("a_c_horse_andalusian_darkbay"):
			return -887316537 /* GXTEntry: "Andalusian~n~Dark Bay Coat" */;
		case joaat("a_c_horse_andalusian_rosegray"):
			return 1762474047 /* GXTEntry: "Andalusian~n~Rose Grey Coat" */;
		case joaat("a_c_horse_andalusian_perlino"):
			return -828859553 /* GXTEntry: "Andalusian~n~Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return 1410237043 /* GXTEntry: "Appaloosa~n~Blanket Coat" */;
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return -2026073756 /* GXTEntry: "Appaloosa~n~Leopard Blanket Coat" */;
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return 729407854;
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
		case joaat("a_c_horse_arabian_redchestnut"):
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return -845373950;
		case joaat("a_c_horse_arabian_rosegreybay"):
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return 1482814085;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -621245377 /* GXTEntry: "Ardennes~n~Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 2125477381 /* GXTEntry: "Belgian~n~Blond Chestnut Coat" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 1808724704 /* GXTEntry: "Belgian~n~Mealy Chestnut Coat" */;
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return -1745871311 /* GXTEntry: "Dutch Warmblood~n~Sooty Buckskin Coat" */;
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return -1366099125 /* GXTEntry: "Dutch Warmblood~n~Seal Brown Coat" */;
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return -1900776854 /* GXTEntry: "Dutch Warmblood~n~Chocolate Roan Coat" */;
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return 1381855825 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Chestnut Coat" */;
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return -470894301 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Piebald Tobiano Coat" */;
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return -58297715 /* GXTEntry: "Hungarian Halfbred~n~Dark Dapple Grey" */;
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("horse_breed_kentuckysaddle_black");
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return -1158763155;
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return 1112812928 /* GXTEntry: "Kentucky Saddler~n~Chestnut Pinto Coat" */;
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("horse_breed_kentuckysaddle_grey");
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return 2100045093 /* GXTEntry: "Kentucky Saddler~n~Silver Bay Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return 1097965086 /* GXTEntry: "Missouri Fox Trotter~n~Amber Champagne" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -2136667309 /* GXTEntry: "Missouri Fox Trotter~n~Silver Dapple Pinto Coat" */;
		case joaat("a_c_horse_morgan_bay"):
			return -376463594 /* GXTEntry: "Morgan~n~Bay Coat" */;
		case joaat("a_c_horse_morgan_bayroan"):
			return -1917318030 /* GXTEntry: "Morgan~n~Bay Roan Coat" */;
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return 1631640006 /* GXTEntry: "Morgan~n~Flaxen Chestnut Coat" */;
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return -1565311117;
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("horse_breed_morgan_palomino");
		case joaat("a_c_horse_mustang_grullodun"):
			return 210760725 /* GXTEntry: "Mustang~n~Tiger Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2051021144 /* GXTEntry: "Mustang~n~Wild Bay Coat" */;
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return 1924406350 /* GXTEntry: "Mustang~n~Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return -1990143531 /* GXTEntry: "Nokota~n~Blue Roan Coat" */;
		case joaat("a_c_horse_nokota_whiteroan"):
			return 1741899492 /* GXTEntry: "Nokota~n~White Roan Coat" */;
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return -1629575335 /* GXTEntry: "Nokota~n~Reverse Dapple Roan Coat" */;
		case joaat("a_c_horse_shire_darkbay"):
			return 1096294193 /* GXTEntry: "Shire~n~Dark Bay Coat" */;
		case joaat("a_c_horse_shire_lightgrey"):
			return -1162498792 /* GXTEntry: "Shire~n~Light Grey Coat" */;
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return -212500005 /* GXTEntry: "Suffolk Punch~n~Sorrel Coat" */;
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return -538557079 /* GXTEntry: "Suffolk Punch~n~Red Chestnut Coat" */;
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return 171150858 /* GXTEntry: "Tennessee Walker~n~Black Rabicano Coat" */;
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("horse_breed_tennesseewalker_chestnut");
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return -126472599 /* GXTEntry: "Tennessee Walker~n~Dapple Bay Coat" */;
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return -1219957736;
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return -332060056 /* GXTEntry: "Tennessee Walker~n~Red Roan Coat" */;
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return 1917500091 /* GXTEntry: "Tennessee Walker~n~Flaxen Roan Coat" */;
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return -1043453945 /* GXTEntry: "Thoroughbred~n~Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 1723487083 /* GXTEntry: "Thoroughbred~n~Dapple Grey Coat" */;
		case joaat("a_c_horse_thoroughbred_brindle"):
			return 2044230644 /* GXTEntry: "Thoroughbred~n~Brindle Coat" */;
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return 1680713143 /* GXTEntry: "Thoroughbred~n~Reverse Dapple Black Coat" */;
		case joaat("a_c_horse_turkoman_darkbay"):
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
		case joaat("a_c_horse_turkoman_silver"):
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
		case joaat("a_c_horse_arabian_grey"):
			return 2130706226 /* GXTEntry: "Arabian~n~Grey Coat" */;
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
		case joaat("a_c_horse_mustang_goldendun"):
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return 330935532 /* GXTEntry: "Tennessee Walker~n~Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -935042458 /* GXTEntry: "Shire~n~Raven Black Coat" */;
		case joaat("a_c_horse_buell_warvets"):
			return -41062704;
		case joaat("a_c_horse_john_endlesssummer"):
			return 887669186;
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return 2102774612;
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return -2011111190;
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1207(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_686(iParam1, 0))
	{
		return 0;
	}
	if (!func_1305(iParam1))
	{
		return 0;
	}
	if (func_1204(iParam0))
	{
		return 0;
	}
	iVar0 = func_1302(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_677(0) };
	Var1.f_4 = iVar0;
	if (!func_1018(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1208(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_686(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_663(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1272(&Var7);
					if (func_1018(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1211(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1209(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1221(1) < iParam0)
	{
		iParam0 = func_1221(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_394(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

int func_1210(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_664(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_684(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1211(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_482(0))
	{
		return func_1306(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_684(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_664(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_687(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_482(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_664(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_1213(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() == -1)
	{
		if (func_748(43))
		{
			if (func_757(iParam0, 412399755))
			{
				func_995(-1791518714);
				if (func_996() == 0)
				{
					func_392(0, 10);
					iVar0 = func_1307(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_748(44))
		{
			if (func_757(iParam0, 709057512))
			{
				func_995(-2087881550);
				if (func_996() == 1)
				{
					func_392(0, 10);
					iVar0 = func_1307(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(45))
		{
			if (func_757(iParam0, -1478961327))
			{
				func_995(1908068621);
				if (func_996() == 2)
				{
					func_392(0, 10);
					iVar0 = func_1307(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(46))
		{
			if (func_757(iParam0, -1238404098))
			{
				func_995(1611247019);
				if (func_996() == 3)
				{
					func_392(0, 10);
					iVar0 = func_1307(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(47))
		{
			if (func_757(iParam0, 1160548794))
			{
				func_995(1319635688);
				if (func_996() == 4)
				{
					func_392(0, 10);
					iVar0 = func_1307(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1214(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1215(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1308(iParam1);
	func_1309(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1310(&(uParam0->f_26), iVar1);
		if (func_1311(uParam0->f_26, &iVar0))
		{
			func_1312(iVar0, iVar1);
		}
	}
}

int func_1216(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_664(0), &Var5, iParam1);
	return 1;
}

void func_1217(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1218(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1219(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1220(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1313(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_1221(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* func_1222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1223(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1224(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1225(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1226(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1227(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1228(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_833(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1227(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1229(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1230(bool bParam0)
{
	func_1314(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

float func_1231(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1119(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1232(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1315(iVar6) - func_1315(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1232(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1233(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1235(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1232(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1315(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1315(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1236(int iParam0)
{
	int iVar0;

	if (func_1316(iParam0, &iVar0))
	{
		return func_1315(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1317())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1317())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1317())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1238(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1318(iParam0));
	sVar4 = func_1320(func_1319(iVar3, iParam2));
	sVar6 = func_1321(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1322(iParam0));
	iVar8 = func_1323(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1324(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_967(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1325(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1239(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1240(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1241(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1242(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1245(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1326(&iVar0, 0, iVar95, &Var1) && !func_1326(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1327(iVar0, &Var1);
			if (func_686(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1246()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_1328(Global_35, &iVar0);
	Var30 = { func_677(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1329(0);
	func_1330(7);
	func_1331(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_829() == 1160113249)
	{
		func_1331(joaat("clothing_p3_player_three_ms1_hat_000_000"), 1, 1, 1);
		func_1331(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1332(Global_35, &iVar0);
}

int func_1247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_664(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_240(&uVar6, iVar0);
	func_241(&uVar6, iVar1);
	func_242(&uVar6, iVar2);
	func_243(&uVar6, iVar3);
	func_244(&uVar6, iVar4);
	func_245(&uVar6, iVar5);
	return uVar6;
}

void func_1248(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_394(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

float func_1249(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1250(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1251(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1034(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1034(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1252()
{
	return Global_1946804->f_1497;
}

char* func_1253(int iParam0)
{
	int iVar0;

	iVar0 = func_1099(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1143(iVar0);
}

int func_1254(int iParam0)
{
	int iVar0;

	if (func_1333(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1334(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1335(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1336(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1255(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_550(func_1337(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1256(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_550(func_1338(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1257(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1258()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(1654063339, 1, 752097756);
	iVar0 = func_1122(1);
	func_1238(1, iVar0, 0);
}

void func_1259(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1260()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(1623931083, 1, 752097756);
	iVar0 = func_1122(2);
	func_1238(2, iVar0, 0);
}

void func_1261()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(-1845241476, 1, 752097756);
	iVar0 = func_1122(0);
	func_1238(0, iVar0, 0);
}

int func_1262(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1263(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_1339(iParam0, func_829()))
	{
		return 0;
	}
	Var1 = func_1053(func_829());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("component")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1264(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_1053(func_829());
	Var20 = { func_1116(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1118(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1011(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1020(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1219(&(Global_1946804->f_964), iVar19, Var5.f_4, joaat("component"), 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1012(iVar0);
	return 1;
}

void func_1265(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1214(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

void func_1266(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1267(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1340();
	}
	if (func_24() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_1268(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_24() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_833(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1227(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1269(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_1270(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1021(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_1271(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1099(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1267(iParam1);
	}
	if ((bParam3 && func_1181(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1339(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1270(Global_40.f_7729, 4096);
		func_1183(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		func_676(bParam0);
	}
	func_1341();
	if (!func_1342(iParam1))
	{
		func_1344(iVar0, bParam0, func_1343(iParam1), 1, 0, 1);
	}
	func_1345(bParam0);
	return 1;
}

void func_1272(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_1273(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1346(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1192() };
	*iParam1 = func_1347(Var0, iParam0, 0);
	if (!func_686(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1274(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1275(int iParam0)
{
	if (func_506())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737 /* GXTEntry: "Color Combination One" */;
			case -712836614:
				return 1832924306 /* GXTEntry: "Chestnut & Charcoal" */;
			case -1629133289:
				return -960265739 /* GXTEntry: "Maple \'Duck Bill\' Horn" */;
			case 1302066700:
				return 1484641439 /* GXTEntry: "Belled Oxbow Stirrup" */;
			case 599669344:
				return -1742648548 /* GXTEntry: "Weathered Russet" */;
			case -1555511632:
				return -288915854 /* GXTEntry: "Weathered Dark Oak" */;
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398 /* GXTEntry: "Color Combination Two" */;
			case -712836614:
				return 540384851 /* GXTEntry: "Hickory" */;
			case -1629133289:
				return 859626502 /* GXTEntry: "Maple \'Torquemada\' Horn" */;
			case 1302066700:
				return -415239647 /* GXTEntry: "Slim-line Iron Stirrup" */;
			case 599669344:
				return 1436607742 /* GXTEntry: "Weathered Chestnut" */;
			case -1555511632:
				return 691935155 /* GXTEntry: "Chestnut" */;
		}
	}
	return 0;
}

void func_1276(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_1277(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_1278(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_1279(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_1280(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_1281(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_1282(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_1348(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1192() };
	Var14 = { func_480(iParam0, Var10, iVar9, 0) };
	if (func_1211(Var14, iParam1))
	{
		if (func_1349(iParam0))
		{
			if (func_1273(325139909, &iVar18))
			{
				if (func_1282(iVar18, 0))
				{
				}
			}
		}
		else if (func_1350(iParam0))
		{
			if (func_1273(325139909, &iVar19))
			{
				if (func_1282(iVar19, 0))
				{
				}
			}
			if (func_1273(986998820, &iVar20))
			{
				if (func_1282(iVar20, 0))
				{
				}
			}
			iVar21 = func_1351(iParam0);
			if (func_686(iVar21, 0))
			{
				if (func_1282(iVar21, 1))
				{
				}
			}
		}
		func_1352();
		return 1;
	}
	return 0;
}

int func_1283()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1284()
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_1285()
{
	return 1;
}

int func_1286()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1287()
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_1288()
{
	return 1;
}

int func_1289()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_1290()
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_1291()
{
	return 2;
}

int func_1292()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1293()
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_1294()
{
	return 1;
}

int func_1295()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_1296()
{
	return joaat("a_c_horse_morgan_bay");
}

int func_1297()
{
	return 1;
}

int func_1298()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_1299()
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_1300()
{
	return 1;
}

int func_1301(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1303(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_664(bParam2), uParam0, iParam1);
}

int func_1304(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1204(iParam0))
	{
		return 0;
	}
	iVar0 = func_1302(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_677(0) };
	if (!func_1353(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1354(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1305(int iParam0)
{
	return func_678(iParam0) == joaat("horse");
}

int func_1306(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_684(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_678(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_1355(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1356(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_1357(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1358(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1359(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1360(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = 2116770557; /* GXTEntry: "Gator Egg" */
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_998(iVar12);
	}
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_999(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1308(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1309(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1361(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1311(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1312(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1313(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

void func_1314(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1315(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1316(int iParam0, int iParam1)
{
	return 0;
}

int func_1317()
{
	return 0;
}

int func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1319(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1320(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1321(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1323(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("toast_rpg_level_stamina");
		case 0:
			return joaat("toast_rpg_level_health");
		case 2:
			return joaat("toast_rpg_level_deadeye");
		default:
			break;
	}
	return 0;
}

int func_1324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1326(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1362(iParam1) && !func_1363(iParam1))
	{
		bVar0 = func_1364(iParam1);
	}
	else
	{
		return 0;
	}
	func_1365(uParam3);
	iVar5 = func_1366(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, bVar0, iVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_1327(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1367(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1368(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1328(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_363(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1329(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_686(iVar1, 0))
		{
			func_826(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1369(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_682(iVar2) != -999503751)
		{
			func_1370(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1216(iVar2, 0))
		{
			func_469(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1331(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1371(iParam0))
	{
		return;
	}
	iVar0 = func_682(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1372(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1373(0))
	{
		func_1374(iParam0, 1);
		if (func_829() == 1160113249)
		{
			func_1374(func_1373(-2125499975), 0);
		}
		else
		{
			func_1374(func_1373(1160113249), 0);
		}
	}
	func_1051();
	if (func_1375(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_664(0), iParam0, 0);
	}
	func_469(iParam0, bParam3);
	if (bParam2)
	{
		func_1052(0, 0);
	}
}

void func_1332(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, false))
			{
				if (func_364(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_1333(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (func_757(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1334(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (func_757(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1335(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (func_757(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1336(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (func_757(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1337(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1376(iParam0);
		case 1:
			return func_1377(iParam0);
		case 2:
			return func_1378(iParam0);
		case 3:
			return func_1379(iParam0);
	}
	return 0;
}

int func_1338(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1380(iParam0);
		case 1:
			return func_1381(iParam0);
		case 2:
			return func_1382(iParam0);
		case 3:
			return func_1383(iParam0);
		case 4:
			return func_1384(iParam0);
		case 5:
			return func_1385(iParam0);
		case 6:
			return func_1386(iParam0);
		case 7:
			return func_1387(iParam0);
		case 8:
			return func_1388(iParam0);
	}
	return 0;
}

bool func_1339(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1053(iParam1);
	func_1219(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

int func_1340()
{
	if (func_24() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_1341()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_658(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1389(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_915(1);
	STREAMING::REMOVE_ANIM_DICT(func_1389());
}

int func_1342(int iParam0)
{
	return 0;
}

int func_1343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1344(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1020(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_903();
	if (bParam5)
	{
		if (!func_1390(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_658(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_659();
	}
	func_1391(iVar3, 1, 1, 1, 1, 1);
	func_657(31, 0, 0, 0, 0);
	func_661(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			func_657(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_657(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_470(&(Global_1946804->f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_1345(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

int func_1346(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_682(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1392(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_1347(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1210(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1348(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_682(iParam1);
		iVar5 = func_1392(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_476(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_480(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_664(0);
			Var37 = { func_476(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_480(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_682(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1210(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return 0;
}

int func_1349(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
	}
	if (func_757(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_1350(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (func_757(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_1351(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745: /* GXTEntry: "Alligator Ranch Cutter Saddle" */
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case -769274720: /* GXTEntry: "Boar Mother Hubbard Saddle" */
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case 893370428: /* GXTEntry: "Cougar McClelland Saddle" */
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case 736792276: /* GXTEntry: "Beaver Roping Saddle" */
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case -949205287: /* GXTEntry: "Panther Trail Saddle" */
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_1352()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_476(856287005, 0, 0) };
	Var5 = { func_480(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_682(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1347(Var5, -415648720, 0);
	}
	if (!func_686(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1392(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1347(Var5, iVar11, 0);
			if (!func_686(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1350(iVar14) || func_1349(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1350(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1350(iVar14) && func_1393(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1394(iVar11, &Var16, 1))
									{
										if (!func_1211(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

int func_1353(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_664(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1354(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

struct<28> func_1355(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1359(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1356(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("basket"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1395(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1395(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1395(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1357(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1359(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1358(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("basket"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1395(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1395(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1395(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1359(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1360(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("basket"), iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1395(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1395(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1395(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1361(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1396(&(uParam0->f_3));
}

int func_1362(int iParam0)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_1363(int iParam0)
{
	bool bVar0;

	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1362(iParam0))
	{
		return 0;
	}
	bVar0 = func_1364(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_1364(int iParam0)
{
	iParam0 = func_1301(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_1365(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1367(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1368(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_1369(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1116(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1118(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1012(iVar0);
	}
}

void func_1370(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1397(iParam2, *uParam0);
	func_1398(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1371(int iParam0)
{
	if (func_24() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1372(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1214(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1216(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_682(iParam0) != -999503751)
	{
		func_1370(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1373(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("clothing_p3_player_three_ms1_hat_000_000");
	}
	return joaat("clothing_item_hat_pzero_000");
}

int func_1374(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_664(0), &Var5);
	return 1;
}

bool func_1375(int iParam0)
{
	return func_1399(func_944(iParam0));
}

int func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_1377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234 /* GXTEntry: "Horseman Gun Belt" */;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_1378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234 /* GXTEntry: "Horseman Gun Belt" */;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

char* func_1389()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_1390(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1400(uParam0, iParam3, iParam2) && !func_830(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_658(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_905(1108822547);
		}
		else
		{
			func_1401(1108822547);
		}
	}
	func_911(uParam0, 0, 0);
	func_1217(iParam5);
	return 1;
}

void func_1391(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1340()) || bParam5)
		{
			func_1402();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1403(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1099(Global_40.f_7729);
				Global_1946804->f_1378 = func_1099(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1343(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1100(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1052(0, 1);
	}
	func_1217(0);
}

int func_1392(int iParam0)
{
	int iVar0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1393(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_1394(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_1116(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1117(&Var2, func_1192());
	if (func_1118(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1011(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_686(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1393(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1012(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_1012(iVar0);
	}
	return 0;
}

void func_1395(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1404(iParam0, iParam1);
}

void func_1396(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1397(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1398(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1361(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_654(func_827(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1405(uParam0);
	}
}

bool func_1399(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_1400(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_1267(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_1098(2, iParam1))
	{
		func_1406(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_1401(int iParam0)
{
	func_671(iParam0, 8, 6);
}

void func_1402()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1403(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1053(0);
	iVar1 = 0;
	func_1219(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_1404(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

void func_1405(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1407(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1406(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1407(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1408(func_829());
	if (*uParam0)
	{
		func_1396(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_24() != -1, iParam2);
	*uParam0 = 1;
}

int func_1408(int iParam0)
{
	if (func_24() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

