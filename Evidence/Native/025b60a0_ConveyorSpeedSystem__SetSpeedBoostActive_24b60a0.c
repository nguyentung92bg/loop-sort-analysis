/* IL2CPP: ConveyorSpeedSystem$$SetSpeedBoostActive
void ConveyorSpeedSystem__SetSpeedBoostActive (ConveyorSpeedSystem_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$SetSpeedBoostActive
   void ConveyorSpeedSystem__SetSpeedBoostActive (ConveyorSpeedSystem_o* __this, bool isActive,
   const MethodInfo* method); */

void ConveyorSpeedSystem__SetSpeedBoostActive_24b60a0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  byte abStack_24 [4];
  
                    /* try { // try from 025b60a0 to 026b60bf has its CatchHandler @ 025b608c */
  puVar2 = PTR_DAT_049b5310;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b609c with catch @ 025b60a8
                        */
  if ((bRam0000000004f4bb90 & 1) == 0) {
                    /* try { // try from 025b60c0 to 026b60d7 has its CatchHandler @ 025b6108 */
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025b60d8 to 026b60f7 has its CatchHandler @ 025b608c */
    bRam0000000004f4bb90 = 1;
  }
  puVar1 = PTR_DAT_049b52a8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025b60f8 to 026b6107 has its CatchHandler @ 025b6108 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b52a8;
                    /* catch() { ... } // from try @ 025b60c0 with catch @ 025b6108
                       catch() { ... } // from try @ 025b60f8 with catch @ 025b6108 */
                    /* try { // try from 025b610c to 026b610f has its CatchHandler @ 025b6118 */
  param_2 = param_2 & 1;
                    /* try { // try from 025b6110 to 026b611b has its CatchHandler @ 025b608c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b610c with catch @ 025b6118
                        */
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                    /* try { // try from 025b611c to 026b6167 has its CatchHandler @ 025b611c
                       catch() { ... } // from try @ 025b611c with catch @ 025b611c
                       catch() { ... } // from try @ 025b62b8 with catch @ 025b611c
                       catch() { ... } // from try @ 025b6314 with catch @ 025b611c
                       catch() { ... } // from try @ 025b633c with catch @ 025b611c
                       catch() { ... } // from try @ 025b63bc with catch @ 025b611c */
  if ((bRam0000000004f5c3f2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfad8,param_2,0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f5c3f2 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    abStack_24[0] = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar4 + 0x9b0),abStack_24,
               *(undefined8 *)PTR_DAT_049cfad8);
    UnityEngine_PlayerPrefs__SetInt_3c0faec(*(undefined8 *)(lVar4 + 0x9b0),param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

