/* IL2CPP: DataInstaller.<>c__DisplayClass2_0$$<Install>b__0
bool DataInstaller___c__DisplayClass2_0___Install_b__0 (DataInstaller___c__DisplayClass2_0_o* __this, Data_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataInstaller.<>c__DisplayClass2_0$$<Install>b__0
   bool DataInstaller___c__DisplayClass2_0___Install_b__0 (DataInstaller___c__DisplayClass2_0_o*
   __this, Data_o* x, const MethodInfo* method); */

bool DataInstaller___c__DisplayClass2_0___Install_b__0_24fa718(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = System_Object__GetType_3142aac(param_2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = System_Object__GetType_3142aac(*(long *)(param_1 + 0x10),0);
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
      }
      return lVar1 == lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

