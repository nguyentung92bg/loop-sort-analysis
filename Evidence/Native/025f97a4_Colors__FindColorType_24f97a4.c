/* IL2CPP: Colors$$FindColorType
ColorType_o Colors__FindColorType (Colors_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025f9abc) */
/* IL2CPP: Colors$$FindColorType
   ColorType_o Colors__FindColorType (Colors_o* __this, UnityEngine_Material_o* material, const
   MethodInfo* method); */

undefined8 Colors__FindColorType_24f97a4(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  
                    /* try { // try from 025f97a4 to 026f97d3 has its CatchHandler @ 025f9328 */
  if ((bRam0000000004f4bd3b & 1) == 0) {
                    /* try { // try from 025f97d4 to 026f97d7 has its CatchHandler @ 025f97fc */
    FUN_021f03f8(PTR_DAT_049c8860);
                    /* try { // try from 025f97dc to 026f97e3 has its CatchHandler @ 025f97f8 */
    FUN_021f03f8(PTR_DAT_049c8868);
                    /* try { // try from 025f97e8 to 026f97eb has its CatchHandler @ 025f97f4 */
                    /* try { // try from 025f97ec to 026f9833 has its CatchHandler @ 025f9328 */
                    /* catch() { ... } // from try @ 025f96a8 with catch @ 025f97f0 */
    FUN_021f03f8(PTR_DAT_049c8870);
                    /* catch() { ... } // from try @ 025f9798 with catch @ 025f97f4
                       catch() { ... } // from try @ 025f97e8 with catch @ 025f97f4 */
                    /* catch() { ... } // from try @ 025f9770 with catch @ 025f97f8
                       catch() { ... } // from try @ 025f97dc with catch @ 025f97f8 */
                    /* catch() { ... } // from try @ 025f97d4 with catch @ 025f97fc */
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* catch() { ... } // from try @ 025f967c with catch @ 025f9800 */
    FUN_021f03f8(PTR_DAT_049c8878);
                    /* catch() { ... } // from try @ 025f974c with catch @ 025f980c */
                    /* catch() { ... } // from try @ 025f96cc with catch @ 025f9810 */
                    /* catch() { ... } // from try @ 025f96ec with catch @ 025f9814 */
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c8880);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 025f9834 to 026f9837 has its CatchHandler @ 025f9844 */
    bRam0000000004f4bd3b = 1;
  }
  uStack_48 = 0;
                    /* catch() { ... } // from try @ 025f9834 with catch @ 025f9844 */
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  uStack_88 = 0;
                    /* try { // try from 025f984c to 026f9853 has its CatchHandler @ 025f9c4c */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 025f9854 to 026f986b has its CatchHandler @ 025f9328 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 025f986c to 026f986f has its CatchHandler @ 025f9c3c */
    uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x20),param_2,&uStack_48,*(undefined8 *)PTR_DAT_049c8860)
    ;
                    /* try { // try from 025f9870 to 026f98c3 has its CatchHandler @ 025f9328 */
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_025f9ab8;
      plStack_58 = (long *)GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_2896e60
                                     (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c8870);
      puVar5 = PTR_DAT_049c8880;
      puVar4 = PTR_DAT_049c8878;
      puVar3 = PTR_DAT_049b4360;
      puVar2 = PTR_DAT_049b3b98;
      pplStack_b8 = &plStack_58;
      uStack_c0 = 0;
      do {
        plVar8 = plStack_58;
                    /* try { // try from 025f98c4 to 026f98cb has its CatchHandler @ 025f9c90 */
        if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plStack_58;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* try { // try from 025f98e4 to 026f992f has its CatchHandler @ 025f9c98 */
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_025f9914;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar3,0);
LAB_025f9914:
        uVar9 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        plVar8 = plStack_58;
        if ((uVar9 & 1) == 0) {
                    /* try { // try from 025f9a14 to 026f9a23 has its CatchHandler @ 025f9328 */
          bVar1 = false;
          goto LAB_025f9a18;
        }
        if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plStack_58;
                    /* try { // try from 025f9930 to 026f994f has its CatchHandler @ 025f9328 */
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_025f9978;
            }
                    /* try { // try from 025f9950 to 026f995f has its CatchHandler @ 025f9c8c */
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar4,0);
                    /* try { // try from 025f9968 to 026f9973 has its CatchHandler @ 025f9c84 */
LAB_025f9978:
                    /* try { // try from 025f9984 to 026f998f has its CatchHandler @ 025f9c88 */
        (*(code *)*puVar10)(&uStack_e8,plVar8,puVar10[1]);
        uStack_78 = uStack_e0;
        uStack_80 = uStack_e8;
        uStack_68 = uStack_d0;
        uStack_70 = uStack_d8;
        uStack_60 = uStack_c8;
                    /* try { // try from 025f99a8 to 026f99af has its CatchHandler @ 025f9b9c */
        System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                  (&uStack_80,&uStack_88,&uStack_b0,*(undefined8 *)puVar5);
        uVar7 = uStack_88;
        uVar6 = uStack_b0;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 025f99c8 to 026f9a13 has its CatchHandler @ 025f9ba0 */
        uVar9 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,param_2,0);
      } while ((uVar9 & 1) == 0);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_e8 = uVar7;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x20),uVar6,&uStack_e8,*(undefined8 *)PTR_DAT_049c8868);
      bVar1 = true;
      uStack_88 = uVar7;
LAB_025f9a18:
      plVar8 = plStack_58;
      if (plStack_58 != (long *)0x0) {
                    /* try { // try from 025f9a24 to 026f9a33 has its CatchHandler @ 025f9b78 */
        lVar11 = *plStack_58;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 025f9a38 to 026f9a47 has its CatchHandler @ 025f9b90 */
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b3cc8) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_025f9a78;
            }
            uVar9 = uVar9 - 1;
                    /* try { // try from 025f9a54 to 026f9a5b has its CatchHandler @ 025f9b7c */
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
                    /* try { // try from 025f9a60 to 026f9a77 has its CatchHandler @ 025f9b80 */
        puVar10 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)PTR_DAT_049b3cc8,0);
LAB_025f9a78:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
      }
      uStack_48 = uStack_88;
      if (!bVar1) {
        uStack_48 = 0;
      }
    }
                    /* try { // try from 025f9aa4 to 026f9aab has its CatchHandler @ 025f9b98 */
    return uStack_48;
  }
LAB_025f9ab8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

