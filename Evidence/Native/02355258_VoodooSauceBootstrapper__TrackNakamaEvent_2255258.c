/* IL2CPP: VoodooSauceBootstrapper$$TrackNakamaEvent
void VoodooSauceBootstrapper__TrackNakamaEvent (System_String_o* eventName, System_Collections_Generic_Dictionary_string__object__o* eventContextProperties, System_String_o* eventType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x04595da4) */
/* WARNING: Removing unreachable block (ram,0x04595dfc) */
/* WARNING: Removing unreachable block (ram,0x04595e08) */
/* WARNING: Removing unreachable block (ram,0x04595e1c) */
/* WARNING: Removing unreachable block (ram,0x04595e28) */
/* WARNING: Removing unreachable block (ram,0x04595e38) */
/* WARNING: Removing unreachable block (ram,0x04595e88) */
/* WARNING: Removing unreachable block (ram,0x04595ea4) */
/* WARNING: Removing unreachable block (ram,0x04595f1c) */
/* WARNING: Removing unreachable block (ram,0x04595f24) */
/* IL2CPP: VoodooSauceBootstrapper$$TrackNakamaEvent
   void VoodooSauceBootstrapper__TrackNakamaEvent (System_String_o* eventName,
   System_Collections_Generic_Dictionary_string__object__o* eventContextProperties, System_String_o*
   eventType, const MethodInfo* method); */

void VoodooSauceBootstrapper__TrackNakamaEvent_2255258
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
                    /* try { // try from 02355290 to 0245529f has its CatchHandler @ 023552d4 */
    bRam0000000004f49bb5 = 1;
  }
                    /* try { // try from 023552a0 to 0245531b has its CatchHandler @ 02354f1c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b62a0;
  if ((bRam0000000004f5f47d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0);
    bRam0000000004f5f47d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a631e0;
  if ((bRam0000000004f60112 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a631e0);
    FUN_021f03f8(PTR_DAT_049b62a0);
    FUN_021f03f8(PTR_DAT_04a6c368);
    FUN_021f03f8(PTR_DAT_04a6c370);
    FUN_021f03f8(PTR_DAT_04a65c08);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b3d10);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_04a6c378);
    FUN_021f03f8(PTR_DAT_04a6c2c0);
    FUN_021f03f8(PTR_DAT_04a6c380);
    FUN_021f03f8(PTR_DAT_049b48d8);
    FUN_021f03f8(PTR_DAT_04a634a0);
    bRam0000000004f60112 = 1;
  }
  puVar4 = PTR_DAT_04a6c380;
  puVar3 = PTR_DAT_04a634a0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b48d8;
  puVar1 = PTR_DAT_049b3d10;
  lVar5 = Voodoo_Sauce_Internal_Analytics_AnalyticsLogger__get_Main_449c29c(0);
  uVar9 = *(undefined8 *)puVar4;
  uVar8 = *(undefined8 *)puVar3;
  auStack_70[0] = 0;
  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,auStack_70);
  uVar10 = *(undefined8 *)puVar2;
  uVar6 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,0);
  uVar6 = System_String__Join_2f7ea5c(uVar10,uVar6,0);
  uVar7 = System_String__Format_2f7dfac(uVar9,uVar7,uVar6,0);
  puVar1 = PTR_DAT_049b62a0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Voodoo_Sauce_Core_Diagnostics_LogCategory__DebugTag_4346be0(lVar5,uVar8,uVar7,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x3a0);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d0);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),param_1,param_3,uVar7,param_2,
               *(undefined8 *)(lVar5 + 0x28));
  }
  return;
}

