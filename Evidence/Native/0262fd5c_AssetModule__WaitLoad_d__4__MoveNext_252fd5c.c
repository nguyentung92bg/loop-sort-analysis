/* IL2CPP: AssetModule.<WaitLoad>d__4$$MoveNext
void AssetModule__WaitLoad_d__4__MoveNext (AssetModule__WaitLoad_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AssetModule.<WaitLoad>d__4$$MoveNext
   void AssetModule__WaitLoad_d__4__MoveNext (AssetModule__WaitLoad_d__4_o __this, const MethodInfo*
   method); */

void AssetModule__WaitLoad_d__4__MoveNext_252fd5c(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bf14 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9e88);
    FUN_021f03f8(PTR_DAT_049c9e90);
    FUN_021f03f8(PTR_DAT_049c9e98);
    FUN_021f03f8(PTR_DAT_049c9ea0);
    FUN_021f03f8(PTR_DAT_049c9ea8);
    bRam0000000004f4bf14 = 1;
  }
  lVar9 = *(long *)(param_1 + 10);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_48 = 0;
  if (*param_1 == 0) {
    auStack_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 6);
    uStack_70 = *(undefined8 *)(param_1 + 4);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    auStack_40 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__GetAwaiter___Il2CppFullySharedGenericType__25e4fac
                           (&uStack_70,*(undefined8 *)PTR_DAT_049c9e90);
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar1 = auStack_40._0_8_;
    if ((long *)auStack_40._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_40._0_8_;
      uVar8 = auStack_40._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0262fe70 to 0272ff7b has its CatchHandler @ 0262fe70
                       catch() { ... } // from try @ 0262fe70 with catch @ 0262fe70
                       catch() { ... } // from try @ 0262ffe8 with catch @ 0262fe70
                       catch() { ... } // from try @ 026300cc with catch @ 0262fe70
                       catch() { ... } // from try @ 0263010c with catch @ 0262fe70
                       catch() { ... } // from try @ 02630148 with catch @ 0262fe70
                       catch() { ... } // from try @ 0263016c with catch @ 0262fe70 */
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0262fecc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0262fecc:
      iVar2 = (*(code *)*puVar3)(uVar1,uVar8,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
                    /* try { // try from 02630054 to 0273006b has its CatchHandler @ 0263011c */
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_40;
        thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 02630078 to 02730087 has its CatchHandler @ 02630120 */
        FUN_0235c420(param_1 + 2,auStack_40,param_1,*(undefined8 *)PTR_DAT_049c9e88);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar1 = auStack_40._0_8_;
  if ((long *)auStack_40._0_8_ != (long *)0x0) {
    lVar4 = *(long *)auStack_40._0_8_;
    uVar8 = auStack_40._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0262ff64;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0262ff64:
    (*(code *)*puVar3)(uVar1,uVar8,puVar3[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02630108 to 0273010b has its CatchHandler @ 02630114 */
    FUN_021f06a0();
  }
                    /* try { // try from 0262ff7c to 0272ff83 has its CatchHandler @ 02630124 */
  if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_88 = *(undefined8 *)(param_1 + 6);
  uStack_90 = *(undefined8 *)(param_1 + 4);
  uStack_80 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 0262ff9c to 0272ffe7 has its CatchHandler @ 02630128 */
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
            (*(long *)(lVar9 + 0x20),&uStack_90,*(undefined8 *)PTR_DAT_049c9e98);
  if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar7 = *(long **)(lVar9 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar7;
  iVar2 = *(int *)(*(long *)(lVar9 + 0x20) + 0x20);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 0262ffe8 to 02730013 has its CatchHandler @ 0262fe70 */
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c9ea8) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02630014;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c9ea8,0);
LAB_02630014:
                    /* try { // try from 02630014 to 02730017 has its CatchHandler @ 02630110 */
  (*(code *)*puVar3)(plVar7,iVar2 == 0,puVar3[1]);
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

