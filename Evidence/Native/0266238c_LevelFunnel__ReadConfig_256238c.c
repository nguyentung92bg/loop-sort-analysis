/* IL2CPP: LevelFunnel$$ReadConfig
LevelFunnelConfig_o* LevelFunnel__ReadConfig (System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$ReadConfig
   LevelFunnelConfig_o* LevelFunnel__ReadConfig
   (System_Collections_Generic_Dictionary_string__string__o* args, const MethodInfo* method); */

undefined8 LevelFunnel__ReadConfig_256238c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  long lStack_18;
  
  if ((bRam0000000004f4c134 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4538);
    FUN_021f03f8(PTR_DAT_049cba38);
    FUN_021f03f8(PTR_DAT_049b4550);
    FUN_021f03f8(PTR_DAT_049cba40);
    FUN_021f03f8(PTR_DAT_049cba48);
    bRam0000000004f4c134 = 1;
  }
  uStack_28 = 0;
  if ((param_1 != 0) &&
     (uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (param_1,*(undefined8 *)PTR_DAT_049cba48,&uStack_28,
                         *(undefined8 *)PTR_DAT_049b4538), (uVar1 & 1) != 0)) {
    uVar1 = System_String__IsNullOrEmpty_2f7c924(uStack_28,0);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    uVar2 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049cba40,uStack_28,*(undefined8 *)PTR_DAT_049b4550,0);
    UnityEngine_JsonUtility__FromJson___Il2CppFullySharedGenericType__265034c
              (uVar2,&lStack_18,*(undefined8 *)PTR_DAT_049cba38);
    if (lStack_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *(long *)(lStack_18 + 0x10);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
      if ((int)*(long *)(lVar3 + 0x18) != 0) {
        return *(undefined8 *)(lVar3 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
  return 0;
}

