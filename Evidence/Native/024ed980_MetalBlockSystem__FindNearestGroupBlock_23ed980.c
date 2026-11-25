/* IL2CPP: MetalBlockSystem$$FindNearestGroupBlock
UnityEngine_MeshRenderer_o* MetalBlockSystem__FindNearestGroupBlock (Carrier_o* carrier, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$FindNearestGroupBlock
   UnityEngine_MeshRenderer_o* MetalBlockSystem__FindNearestGroupBlock (Carrier_o* carrier,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

long MetalBlockSystem__FindNearestGroupBlock_23ed980
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  fVar15 = param_2;
  fVar16 = param_3;
  if ((bRam0000000004f4b632 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1640);
    FUN_021f03f8(PTR_DAT_049c1648);
    FUN_021f03f8(PTR_DAT_049c1650);
    FUN_021f03f8(PTR_DAT_049c1658);
    bRam0000000004f4b632 = 1;
  }
  puVar5 = PTR_DAT_049c1650;
  puVar4 = PTR_DAT_049c1648;
  puVar3 = PTR_DAT_049c1640;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x120) != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_4 + 0x120),&uStack_88,*(undefined8 *)PTR_DAT_049c1658);
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    puStack_80 = &uStack_70;
    uStack_88 = 0;
    fVar12 = 3.4028235e+38;
    lVar10 = 0;
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_70,*(undefined8 *)puVar4);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_70,*(undefined8 *)puVar3);
        return lVar10;
      }
      lVar11 = *(long *)puVar5;
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_70,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_58,uVar9,uVar1);
      lVar8 = lStack_58;
      if (lStack_58 == 0) break;
      lVar7 = UnityEngine_Component__get_transform_3c18724(lStack_58,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar13 = (float)UnityEngine_Transform__get_position_3c2d540(lVar7,0);
      fVar14 = fVar15 - param_2;
      fVar16 = fVar16 - param_3;
      fVar15 = fVar16 * fVar16;
      fVar13 = fVar15 + (fVar13 - param_1) * (fVar13 - param_1) + fVar14 * fVar14;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
        lVar10 = lVar8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

