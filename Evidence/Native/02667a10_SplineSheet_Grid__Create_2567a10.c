/* IL2CPP: SplineSheet.Grid$$Create
SplineSheet_Grid_o SplineSheet_Grid__Create (System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineSheet.Grid$$Create
   SplineSheet_Grid_o SplineSheet_Grid__Create (System_String_o* data, const MethodInfo* method); */

undefined1  [16] SplineSheet_Grid__Create_2567a10(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_049cbcf8;
  puVar4 = PTR_DAT_049cbcf0;
  if ((bRam0000000004f4c171 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbd00);
    FUN_021f03f8(PTR_DAT_049cbcf8);
    FUN_021f03f8(PTR_DAT_049cbcf0);
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4c171 = 1;
  }
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar11,*(undefined8 *)puVar5);
  lStack_70 = lVar11;
  thunk_FUN_021f190c(&lStack_70,lVar11);
  lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                    /* try { // try from 02667ac0 to 02767b47 has its CatchHandler @ 02668394 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar11,*(undefined8 *)puVar5);
  lStack_68 = lVar11;
  thunk_FUN_021f190c(&lStack_68,lVar11);
  lVar8 = lStack_68;
  lVar11 = lStack_70;
  if (param_1 != 0) {
    auVar3._8_8_ = lStack_68;
    auVar3._0_8_ = lStack_70;
    lVar12 = System_String__Split_2f802dc(param_1,0x3a,0,0);
    puVar5 = PTR_DAT_049cbd00;
    puVar4 = PTR_DAT_049b61a0;
    if (lVar12 != 0) {
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar2) {
        uVar15 = 0;
        do {
          if (uVar2 <= uVar15) {
LAB_02667c10:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar13 = *(long *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
          if ((lVar13 == 0) || (lVar13 = System_String__Split_2f802dc(lVar13,0x3b,0,0), lVar13 == 0)
             ) goto LAB_02667c14;
          if ((*(int *)(lVar13 + 0x18) == 0) || (*(int *)(lVar13 + 0x18) == 1)) goto LAB_02667c10;
          uVar1 = *(undefined8 *)(lVar13 + 0x20);
          uVar9 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar13 + 0x28),0);
                    /* try { // try from 02667b64 to 02767b67 has its CatchHandler @ 0266831c */
          if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_02667c10;
                    /* try { // try from 02667b6c to 02767b73 has its CatchHandler @ 02668344 */
          uVar10 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar13 + 0x30),0);
                    /* try { // try from 02667b88 to 02767b8b has its CatchHandler @ 02668318 */
          uStack_78 = 0;
          uStack_80 = uVar1;
                    /* try { // try from 02667b8c to 02767ba7 has its CatchHandler @ 02668340 */
          thunk_FUN_021f190c(&uStack_80,uVar1);
          uVar6 = uStack_80;
          uStack_78 = CONCAT44(uVar10,uVar9);
          uVar7 = uStack_78;
          if (lVar11 == 0) goto LAB_02667c14;
          uStack_60 = uStack_80;
          uStack_58 = uStack_78;
                    /* try { // try from 02667bac to 02767bb7 has its CatchHandler @ 0266833c */
          FUN_02333498(lVar11,&uStack_60,*(undefined8 *)puVar5);
          uVar14 = System_String__op_Equality_2f7b7fc(uVar1,*(undefined8 *)puVar4,0);
          if ((uVar14 & 1) == 0) {
            if (lVar8 == 0) goto LAB_02667c14;
                    /* try { // try from 02667bcc to 02767c7f has its CatchHandler @ 02668384 */
            uStack_60 = uVar6;
            uStack_58 = uVar7;
            FUN_02333498(lVar8,&uStack_60,*(undefined8 *)puVar5);
          }
          uVar2 = *(uint *)(lVar12 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar2);
      }
      return auVar3;
    }
  }
LAB_02667c14:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

