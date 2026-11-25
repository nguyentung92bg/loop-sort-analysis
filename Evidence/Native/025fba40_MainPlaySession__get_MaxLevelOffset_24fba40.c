/* IL2CPP: MainPlaySession$$get_MaxLevelOffset
int32_t MainPlaySession__get_MaxLevelOffset (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_MaxLevelOffset
   int32_t MainPlaySession__get_MaxLevelOffset (MainPlaySession_o* __this, const MethodInfo*
   method); */

void MainPlaySession__get_MaxLevelOffset_24fba40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4bd4e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62c8);
    bRam0000000004f4bd4e = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar1 != 0)) {
    if (lVar1 != 0) {
      uStack_14 = 0;
      lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar1,&uStack_14,
                         **(undefined8 **)(*(long *)(*(long *)PTR_DAT_049b62c8 + 0x20) + 0xc0));
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x18);
        uVar2 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
        System_Int32__Parse_30fbf68(uVar3,uVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

