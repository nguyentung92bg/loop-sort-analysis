/* IL2CPP: VoodooAdjustProvider$$GetWinCapTimestamp
CloudPrefsT_DateTimeOffset__o VoodooAdjustProvider__GetWinCapTimestamp (int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$GetWinCapTimestamp
   CloudPrefsT_DateTimeOffset__o VoodooAdjustProvider__GetWinCapTimestamp (int32_t cap, const
   MethodInfo* method); */

void VoodooAdjustProvider__GetWinCapTimestamp_2252438(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f49ba0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fe0);
    FUN_021f03f8(PTR_DAT_049b5fe8);
    FUN_021f03f8(PTR_DAT_049b5ff0);
                    /* try { // try from 02352480 to 024524a3 has its CatchHandler @ 02352480
                       catch() { ... } // from try @ 02352480 with catch @ 02352480
                       catch() { ... } // from try @ 023524ac with catch @ 02352480 */
    FUN_021f03f8(PTR_DAT_049b5ff8);
    bRam0000000004f49ba0 = 1;
  }
  puVar1 = PTR_DAT_049b5ff8;
  puVar2 = PTR_DAT_049b5fe8;
  if (param_2 == 0x32) {
                    /* try { // try from 023524a4 to 024524ab has its CatchHandler @ 023524c0 */
                    /* try { // try from 023524ac to 024524d3 has its CatchHandler @ 02352480 */
    uVar6 = *(undefined8 *)PTR_DAT_049b5ff0;
  }
  else {
                    /* catch() { ... } // from try @ 023524a4 with catch @ 023524c0 */
    uStack_40 = CONCAT44(uStack_40._4_4_,param_2);
    uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_40);
    uVar6 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar6,0);
  }
  puVar1 = PTR_DAT_049b5fe0;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar2;
  }
  uVar5 = *(undefined8 *)puVar1;
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  CloudPrefsT___Il2CppFullySharedGenericStructType____ctor_2801f24
            (param_1,uVar6,uVar4,&uStack_40,uVar5);
  return;
}

