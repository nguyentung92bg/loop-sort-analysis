/* IL2CPP: BlockGroupShapeSystem$$OnUpdate
void BlockGroupShapeSystem__OnUpdate (BlockGroupShapeSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockGroupShapeSystem$$OnUpdate
   void BlockGroupShapeSystem__OnUpdate (BlockGroupShapeSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void BlockGroupShapeSystem__OnUpdate_23e09ac
               (undefined4 param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  ushort uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_88;
  
                    /* try { // try from 024e09b8 to 025e09e3 has its CatchHandler @ 024e0ccc */
  if ((bRam0000000004f4b5d5 & 1) == 0) {
                    /* try { // try from 024e09f0 to 025e09f3 has its CatchHandler @ 024e0cc8 */
    FUN_021f03f8(PTR_DAT_049c1618);
    FUN_021f03f8(PTR_DAT_049c1620);
    FUN_021f03f8(PTR_DAT_049c1628);
    FUN_021f03f8(PTR_DAT_049c1630);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1638);
    bRam0000000004f4b5d5 = 1;
  }
                    /* try { // try from 024e0a44 to 025e0a6b has its CatchHandler @ 024e153c */
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_88 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_d8 = 0;
  SystemBase__OnUpdate_2555ef8(param_1,param_4,0);
  if (*(long *)(param_4 + 0x68) == 0) {
LAB_024e0d3c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar10 = UnityEngine_Behaviour__get_enabled_3c17e38(*(long *)(param_4 + 0x68),0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_4 + 0x70) == 0) goto LAB_024e0d3c;
                    /* try { // try from 024e0a84 to 025e0a8f has its CatchHandler @ 024e1524 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
              (*(long *)(param_4 + 0x70),&uStack_100,*(undefined8 *)PTR_DAT_049c1618);
    puVar7 = PTR_DAT_049c1638;
    puVar6 = PTR_DAT_049c1630;
    puVar5 = PTR_DAT_049c1628;
    puVar4 = PTR_DAT_049bbf90;
    puVar3 = PTR_DAT_049b5480;
    fVar2 = _UNK_013aa3a4;
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
                    /* try { // try from 024e0ab4 to 025e0ab7 has its CatchHandler @ 024e14fc */
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    uStack_a0 = uStack_e0;
                    /* try { // try from 024e0ad0 to 025e0adf has its CatchHandler @ 024e1504 */
    uVar10 = uStack_f0;
    while (uVar11 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                              (&uStack_c0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      lVar15 = *(long *)puVar6;
      lVar12 = *(long *)(lVar15 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar1 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar15 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
      }
      uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
                    /* try { // try from 024e0b3c to 025e0b4b has its CatchHandler @ 024e1570 */
      uVar14 = thunk_FUN_0224e54c(&uStack_c0,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 024e0b50 to 025e0b5b has its CatchHandler @ 024e156c */
      func_0x04608620(&uStack_100,uVar14,uVar17);
      uStack_c8 = uStack_f8;
      uStack_d0 = uStack_100;
                    /* try { // try from 024e0b6c to 025e0b7b has its CatchHandler @ 024e1560 */
      System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                (&uStack_d0,&lStack_88,&lStack_d8,*(undefined8 *)puVar7);
      lVar12 = lStack_88;
      lVar13 = lStack_d8;
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = UnityEngine_Component__get_gameObject_3c187f4(lStack_88,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar8 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar15,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = UnityEngine_Component__get_gameObject_3c187f4(lVar13,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 024e0bbc to 025e0bef has its CatchHandler @ 024e1568 */
      uVar9 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar15,0);
      if (((uVar8 ^ uVar9) & 1) != 0) {
        lVar15 = UnityEngine_Component__get_gameObject_3c187f4(lVar13,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar15,uVar8 & 1,0);
      }
      fVar18 = (float)uVar10;
      if ((uVar8 & 1) != 0) {
        lVar13 = UnityEngine_Component__get_transform_3c18724(lVar13,0);
        lVar12 = UnityEngine_Component__get_transform_3c18724(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar16 = (float)UnityEngine_Transform__get_position_3c2d540(lVar12,0);
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(puVar4);
          cRam0000000004f4a55e = '\x01';
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 024e0c44 to 025e0c77 has its CatchHandler @ 024e1510 */
        param_3 = param_3 + *(float *)(lVar12 + 0x20) * fVar2;
        fVar18 = fVar18 + *(float *)(lVar12 + 0x1c) * fVar2;
        UnityEngine_Transform__set_position_3c2d61c
                  (fVar16 + *(float *)(lVar12 + 0x18) * fVar2,fVar18,param_3,lVar13,0);
        uVar17 = UnityEngine_Transform__get_eulerAngles_3c2d778(lVar13,0);
        if (*(long *)(param_4 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar16 = fVar18;
                    /* try { // try from 024e0c88 to 025e0c8b has its CatchHandler @ 024e0cbc */
        lVar12 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 0x60),0);
                    /* try { // try from 024e0c90 to 025e0c93 has its CatchHandler @ 024e0cb8 */
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 024e0c98 to 025e0cb3 has its CatchHandler @ 024e0cd8 */
        UnityEngine_Transform__get_eulerAngles_3c2d778(lVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 024e0cb4 to 025e0cf7 has its CatchHandler @ 024e04a4 */
        uVar10 = (ulong)(uint)fVar18;
                    /* catch() { ... } // from try @ 024e0c90 with catch @ 024e0cb8 */
                    /* catch() { ... } // from try @ 024e0c88 with catch @ 024e0cbc */
                    /* catch() { ... } // from try @ 024e0998 with catch @ 024e0cc0 */
                    /* catch() { ... } // from try @ 024e0988 with catch @ 024e0cc4 */
        Extensions__WithY_3f0d5ec(uVar17,uVar10,param_3,fVar16,0);
                    /* catch() { ... } // from try @ 024e09f0 with catch @ 024e0cc8 */
                    /* catch() { ... } // from try @ 024e09b8 with catch @ 024e0ccc */
                    /* catch() { ... } // from try @ 024e0958 with catch @ 024e0cd0 */
        UnityEngine_Transform__set_eulerAngles_3c2d83c(lVar13,0);
                    /* catch() { ... } // from try @ 024e08f4 with catch @ 024e0cd4 */
      }
    }
                    /* catch() { ... } // from try @ 024e0c98 with catch @ 024e0cd8 */
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
              (&uStack_c0,*(undefined8 *)PTR_DAT_049c1620);
  }
                    /* try { // try from 024e0cf8 to 025e0cfb has its CatchHandler @ 024e1414 */
                    /* try { // try from 024e0cfc to 025e0e5f has its CatchHandler @ 024e04a4 */
  return;
}

