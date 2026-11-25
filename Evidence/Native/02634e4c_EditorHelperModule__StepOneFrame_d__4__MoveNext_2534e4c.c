/* IL2CPP: EditorHelperModule.<StepOneFrame>d__4$$MoveNext
void EditorHelperModule__StepOneFrame_d__4__MoveNext (EditorHelperModule__StepOneFrame_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorHelperModule.<StepOneFrame>d__4$$MoveNext
   void EditorHelperModule__StepOneFrame_d__4__MoveNext (EditorHelperModule__StepOneFrame_d__4_o
   __this, const MethodInfo* method); */

void EditorHelperModule__StepOneFrame_d__4__MoveNext_2534e4c(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
                    /* catch() { ... } // from try @ 02634e34 with catch @ 02634e50 */
                    /* try { // try from 02634e54 to 02734e5b has its CatchHandler @ 02634e64 */
                    /* try { // try from 02634e5c to 02734e67 has its CatchHandler @ 02634c48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02634e54 with catch @ 02634e64
                        */
                    /* try { // try from 02634e68 to 02734f93 has its CatchHandler @ 02634e68
                       catch() { ... } // from try @ 02634e68 with catch @ 02634e68
                       catch() { ... } // from try @ 02635000 with catch @ 02634e68
                       catch() { ... } // from try @ 026350a4 with catch @ 02634e68
                       catch() { ... } // from try @ 02635100 with catch @ 02634e68
                       catch() { ... } // from try @ 0263514c with catch @ 02634e68
                       catch() { ... } // from try @ 02635170 with catch @ 02634e68 */
  if ((bRam0000000004f4bf4e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca170);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bf4e = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    UnityEngine_Time__set_timeScale_3c29898(0x3f800000,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8448(0);
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar2 = auStack_40._0_8_;
    auStack_50 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar2 != (long *)0x0) {
      lVar6 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02634fa8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 02634f94 to 02734f9b has its CatchHandler @ 02635128 */
      puVar5 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_02634fa8:
                    /* try { // try from 02634fb4 to 02734fff has its CatchHandler @ 0263512c */
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 4) = auStack_50;
                    /* try { // try from 02635094 to 027350a3 has its CatchHandler @ 02635104 */
        thunk_FUN_021f190c(param_1 + 4,0);
                    /* try { // try from 026350a4 to 027350f3 has its CatchHandler @ 02634e68 */
        FUN_0235c420(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049ca170);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar9 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 02635000 to 02735017 has its CatchHandler @ 02634e68 */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02635030 to 0273503f has its CatchHandler @ 02635114 */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02635040;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 02635018 to 02735027 has its CatchHandler @ 02635110 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02635040:
                    /* try { // try from 02635044 to 0273504b has its CatchHandler @ 02635118 */
    (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
  }
  UnityEngine_Time__set_timeScale_3c29898(0,0);
                    /* try { // try from 0263505c to 0273505f has its CatchHandler @ 02635108 */
                    /* try { // try from 02635060 to 0273506f has its CatchHandler @ 0263511c */
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

