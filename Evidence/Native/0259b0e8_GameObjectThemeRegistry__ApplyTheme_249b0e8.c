/* IL2CPP: GameObjectThemeRegistry$$ApplyTheme
void GameObjectThemeRegistry__ApplyTheme (GameObjectThemeRegistry_o* __this, int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0259b404) */
/* IL2CPP: GameObjectThemeRegistry$$ApplyTheme
   void GameObjectThemeRegistry__ApplyTheme (GameObjectThemeRegistry_o* __this, int32_t themeType,
   const MethodInfo* method); */

void GameObjectThemeRegistry__ApplyTheme_249b0e8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uStack_68;
  long **pplStack_60;
  long *plStack_58;
  long lStack_48;
  
  if ((bRam0000000004f4bab1 & 1) == 0) {
                    /* try { // try from 0259b118 to 0269b123 has its CatchHandler @ 0259b1f0 */
    FUN_021f03f8(PTR_DAT_049c62a8);
    FUN_021f03f8(PTR_DAT_049c62b0);
    FUN_021f03f8(PTR_DAT_049c62b8);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c62c0);
                    /* try { // try from 0259b150 to 0269b15f has its CatchHandler @ 0259b1ec */
    FUN_021f03f8(PTR_DAT_049c62c8);
                    /* try { // try from 0259b164 to 0269b18b has its CatchHandler @ 0259b1f4 */
    FUN_021f03f8(PTR_DAT_049b4360);
    bRam0000000004f4bab1 = 1;
  }
  lStack_48 = 0;
  plStack_58 = (long *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar7 = (long *)GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_2895908
                                 (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c62b8),
     plVar7 != (long *)0x0)) {
    lVar9 = *plVar7;
                    /* try { // try from 0259b1a0 to 0269b1af has its CatchHandler @ 0259b1f8 */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
                    /* try { // try from 0259b1b0 to 0269b213 has its CatchHandler @ 0259b08c */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c62c0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0259b1ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c62c0,0);
LAB_0259b1ec:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259b150 with catch @ 0259b1ec
                        */
    puVar5 = PTR_DAT_049c62c8;
    puVar4 = PTR_DAT_049c62b0;
    puVar3 = PTR_DAT_049c62a8;
    puVar2 = PTR_DAT_049b4360;
    puVar1 = PTR_DAT_049b3cc8;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259b118 with catch @ 0259b1f0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259b164 with catch @ 0259b1f4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259b1a0 with catch @ 0259b1f8
                        */
                    /* try { // try from 0259b214 to 0269b217 has its CatchHandler @ 0259b220 */
    plStack_58 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* catch() { ... } // from try @ 0259b214 with catch @ 0259b220 */
    pplStack_60 = &plStack_58;
                    /* try { // try from 0259b224 to 0269b22b has its CatchHandler @ 0259b234 */
    uStack_68 = 0;
    do {
                    /* try { // try from 0259b22c to 0269b237 has its CatchHandler @ 0259b08c */
      plVar7 = plStack_58;
      if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259b224 with catch @ 0259b234
                        */
      lVar9 = *plStack_58;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0259b280;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar2,0);
LAB_0259b280:
      uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = plStack_58;
      if ((uVar10 & 1) == 0) {
        if (plStack_58 == (long *)0x0) goto LAB_0259b36c;
        lVar9 = *plStack_58;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_0259b344;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0259b32c;
      }
      if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *plStack_58;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0259b2e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar5,0);
LAB_0259b2e4:
      lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar9,0,0);
    } while( true );
  }
  goto LAB_0259b400;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0259b32c:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0259b360;
    }
  }
LAB_0259b344:
  puVar8 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar1,0);
LAB_0259b360:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0259b36c:
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,param_2);
    uVar10 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_2895c1c
                       (*(long *)(param_1 + 0x28),&uStack_68,*(undefined8 *)puVar3);
    if ((uVar10 & 1) == 0) {
      param_2 = *(undefined4 *)(param_1 + 0x20);
      bVar6 = *(char *)(param_1 + 0x24) != '\0';
    }
    else {
      bVar6 = true;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uStack_68 = CONCAT44(uStack_68._4_4_,param_2);
      uVar10 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                         (*(long *)(param_1 + 0x28),&uStack_68,&lStack_48,*(undefined8 *)puVar4);
      if ((uVar10 & 1) != 0) {
        if (lStack_48 == 0) goto LAB_0259b400;
        UnityEngine_GameObject__SetActive_3c1ce34(lStack_48,bVar6,0);
      }
      return;
    }
  }
LAB_0259b400:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

