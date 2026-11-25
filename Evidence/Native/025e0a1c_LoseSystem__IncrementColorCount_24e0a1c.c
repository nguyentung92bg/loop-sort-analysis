/* IL2CPP: LoseSystem$$IncrementColorCount
void LoseSystem__IncrementColorCount (System_Collections_Generic_Dictionary_ColorType__int__o* colors, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$IncrementColorCount
   void LoseSystem__IncrementColorCount (System_Collections_Generic_Dictionary_ColorType__int__o*
   colors, Block_o* block, const MethodInfo* method); */

void LoseSystem__IncrementColorCount_24e0a1c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bc62 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7988);
    FUN_021f03f8(PTR_DAT_049c7990);
    bRam0000000004f4bc62 = 1;
  }
  iStack_30 = 0;
  if ((param_2 != 0) && (param_1 != 0)) {
    uStack_28 = *(undefined8 *)(param_2 + 0xe4);
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (param_1,&uStack_28,&iStack_30,*(undefined8 *)PTR_DAT_049c7988);
    uStack_28 = *(undefined8 *)(param_2 + 0xe4);
    if ((uVar1 & 1) == 0) {
      iStack_2c = 1;
      uVar2 = *(undefined8 *)PTR_DAT_049c7990;
    }
    else {
      iStack_2c = iStack_30 + 1;
      uVar2 = *(undefined8 *)PTR_DAT_049c7990;
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (param_1,&uStack_28,&iStack_2c,uVar2);
                    /* try { // try from 025e0ae8 to 026e0aef has its CatchHandler @ 025e0dac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

