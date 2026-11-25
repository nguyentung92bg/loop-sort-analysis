/* IL2CPP: PrefabModule$$OnScenePreLoad
void PrefabModule__OnScenePreLoad (PrefabModule_o* __this, ScenePreLoadMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$OnScenePreLoad
   void PrefabModule__OnScenePreLoad (PrefabModule_o* __this, ScenePreLoadMessage_o m, const
   MethodInfo* method); */

void PrefabModule__OnScenePreLoad_2536f5c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bf63 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca208);
    FUN_021f03f8(PTR_DAT_049ca210);
    FUN_021f03f8(PTR_DAT_049ca218);
    FUN_021f03f8(PTR_DAT_049c2550);
    FUN_021f03f8(PTR_DAT_049c2558);
    FUN_021f03f8(PTR_DAT_049c2560);
    FUN_021f03f8(PTR_DAT_049c2568);
    bRam0000000004f4bf63 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                      (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049ca208);
    puVar3 = PTR_DAT_049ca218;
    if (iVar6 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_282b148
                        (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049ca210);
      lVar8 = System_Linq_Enumerable__ToList___Il2CppFullySharedGenericType__25e3b7c
                        (uVar7,*(undefined8 *)puVar3);
      puVar5 = PTR_DAT_049c2560;
      puVar4 = PTR_DAT_049c2558;
      puVar3 = PTR_DAT_049c2550;
      if (lVar8 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar8,&uStack_50,*(undefined8 *)PTR_DAT_049c2568);
        while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&uStack_50,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          lVar11 = *(long *)puVar5;
          lVar10 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
          lVar8 = lVar10;
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
            lVar10 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar10 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          uVar7 = thunk_FUN_0224e54c(&uStack_50,
                                     *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                     0x60);
          func_0x04608620(&uStack_38,uVar7,uVar1);
                    /* try { // try from 026370d8 to 02737217 has its CatchHandler @ 026370d8
                       catch() { ... } // from try @ 026370d8 with catch @ 026370d8
                       catch() { ... } // from try @ 02637284 with catch @ 026370d8
                       catch() { ... } // from try @ 02637338 with catch @ 026370d8
                       catch() { ... } // from try @ 02637360 with catch @ 026370d8
                       catch() { ... } // from try @ 026373bc with catch @ 026370d8 */
          PrefabModule__Return_2537164(param_1,uStack_38);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_50,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

