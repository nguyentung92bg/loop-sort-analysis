/* IL2CPP: HomeMonitor$$ShowArea
void HomeMonitor__ShowArea (System_String_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$ShowArea
   void HomeMonitor__ShowArea (System_String_o* area, const MethodInfo* method); */

void HomeMonitor__ShowArea_24481c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long alStack_78 [2];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4b87c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c43e8);
    FUN_021f03f8(PTR_DAT_049c43f0);
    FUN_021f03f8(PTR_DAT_049c43f8);
    FUN_021f03f8(PTR_DAT_049c4400);
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049c4408);
    FUN_021f03f8(PTR_DAT_049c4410);
    FUN_021f03f8(PTR_DAT_049c4418);
    FUN_021f03f8(PTR_DAT_049c4420);
    FUN_021f03f8(PTR_DAT_049c4428);
    bRam0000000004f4b87c = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x50);
    FUN_0235c744(uVar7,alStack_78,*(undefined8 *)PTR_DAT_049c4400);
    lVar4 = alStack_78[0];
    if (alStack_78[0] != 0) {
      uVar5 = Monitors__IsActive_object__2688ab4(alStack_78[0],*(undefined8 *)PTR_DAT_049c4408);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar7 = *(undefined8 *)PTR_DAT_049c4428;
LAB_02548484:
        UnityEngine_Debug__Log_3bd0be4(uVar7,0);
      }
      else {
        FUN_0235c744(uVar7,alStack_78,*(undefined8 *)PTR_DAT_049b5f78);
        if ((alStack_78[0] == 0) || (*(long *)(alStack_78[0] + 0x50) == 0)) goto LAB_025484a8;
        auStack_50 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                               (*(long *)(alStack_78[0] + 0x50),*(undefined8 *)PTR_DAT_049c4410);
        puVar3 = PTR_DAT_049c43f8;
        puVar2 = PTR_DAT_049c43f0;
        puVar1 = PTR_DAT_049c39c0;
        puStack_58 = auStack_50;
        uStack_60 = 0;
        do {
          uVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                            (auStack_50,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                      (auStack_50,*(undefined8 *)PTR_DAT_049c43e8);
            uVar7 = System_String__Concat_2f7d424
                              (*(undefined8 *)PTR_DAT_049c4418,param_1,
                               *(undefined8 *)PTR_DAT_049c4420,0);
            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
            }
            goto LAB_02548484;
          }
          lVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                            (auStack_50,*(undefined8 *)puVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          alStack_78[0] = *(long *)puVar1;
          uStack_68 = *(undefined4 *)(lVar6 + 0x20);
          alStack_78[1] = 0xffffffffffffffff;
          uVar7 = System_Enum__ToString_3135e00(alStack_78,0);
          uVar5 = System_String__Equals_2f7b554(uVar7,param_1,5,0);
        } while ((uVar5 & 1) == 0);
        lVar4 = Monitors__Get_object__26889d0(lVar4,*(undefined8 *)PTR_DAT_049c2dd0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        HomeMonitor__SetArea_24476a4(lVar4,lVar6);
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_50,*(undefined8 *)PTR_DAT_049c43e8);
      }
      return;
    }
  }
LAB_025484a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

