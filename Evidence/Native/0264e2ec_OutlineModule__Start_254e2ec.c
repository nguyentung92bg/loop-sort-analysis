/* IL2CPP: OutlineModule$$Start
void OutlineModule__Start (OutlineModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$Start
   void OutlineModule__Start (OutlineModule_o* __this, const MethodInfo* method); */

void OutlineModule__Start_254e2ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  
  puVar6 = PTR_DAT_049caba8;
  puVar5 = PTR_DAT_049caba0;
  puVar4 = PTR_DAT_049cab98;
  puVar3 = PTR_DAT_049cab50;
  puVar2 = PTR_DAT_049cab40;
  puVar1 = PTR_DAT_049bccd0;
                    /* try { // try from 0264e304 to 0274e307 has its CatchHandler @ 0264e324 */
                    /* try { // try from 0264e308 to 0274e30f has its CatchHandler @ 0264e270 */
                    /* try { // try from 0264e310 to 0274e313 has its CatchHandler @ 0264e320 */
                    /* try { // try from 0264e314 to 0274e317 has its CatchHandler @ 0264e31c */
                    /* try { // try from 0264e318 to 0274e33f has its CatchHandler @ 0264e270 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e2bc with catch @ 0264e31c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e314 with catch @ 0264e31c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e2a4 with catch @ 0264e320
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e310 with catch @ 0264e320
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e28c with catch @ 0264e324
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0264e304 with catch @ 0264e324
                        */
  if ((bRam0000000004f4c062 & 1) == 0) {
                    /* try { // try from 0264e340 to 0274e343 has its CatchHandler @ 0264e34c */
    FUN_021f03f8(PTR_DAT_049cab40);
                    /* catch() { ... } // from try @ 0264e340 with catch @ 0264e34c */
                    /* try { // try from 0264e350 to 0274e357 has its CatchHandler @ 0264e360 */
    FUN_021f03f8(PTR_DAT_049cab50);
                    /* try { // try from 0264e358 to 0274e363 has its CatchHandler @ 0264e270 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0264e350 with catch @ 0264e360
                        */
    FUN_021f03f8(PTR_DAT_049bccd0);
    FUN_021f03f8(PTR_DAT_049caba8);
    FUN_021f03f8(PTR_DAT_049cab58);
    FUN_021f03f8(PTR_DAT_049caba0);
    FUN_021f03f8(PTR_DAT_049cab98);
    bRam0000000004f4c062 = 1;
  }
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_MaterialPropertyBlock___ctor_3bdbb78(uVar7,0);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar7);
  uVar7 = UnityEngine_Shader__Find_3bdf600(*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_021f190c();
  uVar7 = UnityEngine_Shader__Find_3bdf600(*(undefined8 *)puVar5,0);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  thunk_FUN_021f190c();
  plVar15 = *(long **)(param_1 + 0x18);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar6,0);
  lVar14 = *(long *)puVar3;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049cab58;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  lVar14 = *(long *)puVar1;
  uVar10 = **(undefined8 **)(lVar11 + 0xb8);
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar11 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar8 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar8,uVar7,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x18));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = **(long **)(lVar14 + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718(lVar11);
  }
  lVar14 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar11) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_02229a4c(plVar15,lVar11,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar15,uVar8,uVar10,puVar9[1]);
  return;
}

