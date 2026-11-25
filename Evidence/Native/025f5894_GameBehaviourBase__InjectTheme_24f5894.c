/* IL2CPP: GameBehaviourBase$$InjectTheme
void GameBehaviourBase__InjectTheme (GameBehaviourBase_o* __this, int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$InjectTheme
   void GameBehaviourBase__InjectTheme (GameBehaviourBase_o* __this, int32_t themeType, const
   MethodInfo* method); */

void GameBehaviourBase__InjectTheme_24f5894(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bd1e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8418);
    FUN_021f03f8(PTR_DAT_049c8420);
    FUN_021f03f8(PTR_DAT_049c8428);
    FUN_021f03f8(PTR_DAT_049c8430);
    FUN_021f03f8(PTR_DAT_049c8438);
    FUN_021f03f8(PTR_DAT_049c8440);
    bRam0000000004f4bd1e = 1;
  }
  lVar9 = *(long *)(param_1 + 0x58);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (lVar9 == 0) {
LAB_025f5a30:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
              (param_1,lVar9,*(undefined8 *)PTR_DAT_049c8418);
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar9 == 0) goto LAB_025f5a30;
  }
  puVar5 = PTR_DAT_049c8430;
  puVar4 = PTR_DAT_049c8428;
  puVar3 = PTR_DAT_049c8420;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar9,&uStack_50,*(undefined8 *)PTR_DAT_049c8438);
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_50,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar3);
      return;
    }
    lVar10 = *(long *)puVar5;
    lVar7 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar9 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_50,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar8,uVar1);
    if (lStack_38 == 0) break;
    RendererThemeRegistry__ApplyTheme_249cfe8(lStack_38,param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

