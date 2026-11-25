/* IL2CPP: SlicedFilledImage.SetPropertyUtility$$SetStruct<__Il2CppFullySharedGenericStructType>
bool SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o* currentValue, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o newValue, const MethodInfo_2737BF4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage.SetPropertyUtility$$SetStruct<__Il2CppFullySharedGenericStructType>
   bool SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o* currentValue,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o newValue, const MethodInfo_2737BF4*
   method); */

void SlicedFilledImage_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType__2737bf4
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  char acStack_5c [4];
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_3 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_02229774(param_3);
    puVar4 = *(undefined8 **)(param_3 + 0x38);
  }
  uVar7 = (ulong)*(uint *)(puVar4[4] + 0xfc);
  uVar5 = uVar7 + 0xf & 0x1fffffff0;
  lVar6 = (long)&lStack_70 - uVar5;
  lVar8 = lVar6 - uVar5;
  plVar2 = (long *)FUN_026b1a00(*puVar4);
  func_0x04608620(lVar6,param_1,uVar7);
  uVar5 = func_0x04608620(lVar8,param_2,uVar7);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
                    /* try { // try from 02837ca0 to 02937cb3 has its CatchHandler @ 02837df0 */
    lVar3 = *(long *)(*plVar2 + 0x1c0);
    lStack_70 = lVar6;
    lStack_68 = lVar8;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar2,&lStack_70,acStack_5c);
    if (acStack_5c[0] == '\0') {
                    /* try { // try from 02837cc4 to 02937ccf has its CatchHandler @ 02837dfc */
      func_0x04608620(lVar6,param_2,uVar7);
                    /* try { // try from 02837cd0 to 02937cfb has its CatchHandler @ 02837b84 */
      func_0x04608650(param_1,param_2,uVar7);
      lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02229718();
      }
                    /* try { // try from 02837cfc to 02937d07 has its CatchHandler @ 02837df8 */
      FUN_021f03a8(lVar8,param_1,lVar6);
    }
    uVar5 = (ulong)(acStack_5c[0] == '\0');
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* try { // try from 02837d18 to 02937d23 has its CatchHandler @ 02837dfc */
                    /* try { // try from 02837d24 to 02937dd3 has its CatchHandler @ 02837b84 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

