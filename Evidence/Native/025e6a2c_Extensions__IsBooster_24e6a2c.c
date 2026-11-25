/* IL2CPP: Extensions$$IsBooster
bool Extensions__IsBooster (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$IsBooster
   bool Extensions__IsBooster (int32_t item, const MethodInfo* method); */

uint Extensions__IsBooster_24e6a2c(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc8f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c48);
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bc8f = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uStack_24 = param_1;
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsValue_282c24c
                      (**(long **)(lVar3 + 0xb8),&uStack_24,*(undefined8 *)PTR_DAT_049c7c48);
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

