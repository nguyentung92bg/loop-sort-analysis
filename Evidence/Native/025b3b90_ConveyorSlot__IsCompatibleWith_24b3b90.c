/* IL2CPP: ConveyorSlot$$IsCompatibleWith
bool ConveyorSlot__IsCompatibleWith (ConveyorSlot_o* __this, ConveyorSlot_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$IsCompatibleWith
   bool ConveyorSlot__IsCompatibleWith (ConveyorSlot_o* __this, ConveyorSlot_o* slot, const
   MethodInfo* method); */

uint ConveyorSlot__IsCompatibleWith_24b3b90(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 025b3ba4 to 026b3bcb has its CatchHandler @ 025b400c */
  if ((bRam0000000004f4bb7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb7d = 1;
  }
  lVar9 = ConveyorSlot__GetFirstBlock_24b3b08(param_1);
  puVar3 = PTR_DAT_049b3b98;
  if (param_2 == 0) {
LAB_025b3c5c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025b3bcc to 026b3bcf has its CatchHandler @ 025b3ffc */
  lVar10 = ConveyorSlot__GetFirstBlock_24b3b08(param_2);
  lVar12 = *(long *)puVar3;
                    /* try { // try from 025b3be4 to 026b3be7 has its CatchHandler @ 025b3f18 */
                    /* try { // try from 025b3be8 to 026b3bef has its CatchHandler @ 025b3ff4 */
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574(lVar12);
  }
  uVar11 = UnityEngine_Object__op_Inequality_3c1b96c(lVar9,0,0);
                    /* try { // try from 025b3c08 to 026b3c0f has its CatchHandler @ 025b42e4 */
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = UnityEngine_Object__op_Inequality_3c1b96c(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if (lVar9 == 0) goto LAB_025b3c5c;
      if ((bRam0000000004f4b5bf & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c13b8,lVar10,0);
        FUN_021f03f8(PTR_DAT_049c13c0);
        FUN_021f03f8(PTR_DAT_049c13c8);
        FUN_021f03f8(PTR_DAT_049c13e0);
        FUN_021f03f8(PTR_DAT_049c13d8);
        FUN_021f03f8(PTR_DAT_049c13e8);
        bRam0000000004f4b5bf = 1;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      if (lVar10 == 0) {
LAB_024dcd9c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = ColorType__op_Equality_24f9db0
                         (*(undefined8 *)(lVar9 + 0xe4),*(undefined8 *)(lVar10 + 0xe4),0);
      if ((uVar11 & 1) == 0) {
        if (*(long *)(lVar9 + 0xf0) == 0) goto LAB_024dcd9c;
        if ((*(int *)(*(long *)(lVar9 + 0xf0) + 0x18) == 0) || (*(long *)(lVar9 + 0x150) == 0)) {
          uVar6 = 0;
        }
        else {
          if (*(long *)(lVar10 + 0xf0) == 0) goto LAB_024dcd9c;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(lVar10 + 0xf0),auStack_90,*(undefined8 *)PTR_DAT_049c13d8);
          puVar5 = PTR_DAT_049c13e0;
          puVar4 = PTR_DAT_049c13c8;
          puVar3 = PTR_DAT_049c13c0;
          uStack_58 = uStack_88;
          uStack_48 = uStack_78;
          uStack_50 = uStack_80;
          do {
            do {
              uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_60,*(undefined8 *)puVar3);
              if ((uVar6 & 1) == 0) goto LAB_024dcd80;
              lVar14 = *(long *)puVar4;
              lVar12 = *(long *)(lVar14 + 0x20);
              uVar2 = *(ushort *)(lVar12 + 0x135);
              lVar10 = lVar12;
              if ((uVar2 & 1) == 0) {
                lVar10 = FUN_02229718();
                lVar12 = *(long *)(lVar14 + 0x20);
                uVar2 = *(ushort *)(lVar12 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar12 = FUN_02229718();
              }
              uVar7 = thunk_FUN_0224e54c(&uStack_60,
                                         *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                         0x60);
              func_0x04608620(auStack_90,uVar7,uVar1);
              uVar11 = Block__TryGetFeature_23dc908(lVar9,auStack_90[0],&uStack_70);
            } while ((uVar11 & 1) == 0);
            plVar15 = *(long **)(lVar9 + 0x150);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar10 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_024dcd6c;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)puVar5,0);
LAB_024dcd6c:
            uVar11 = (*(code *)*puVar8)(plVar15,lVar9,puVar8[1]);
          } while ((uVar11 & 1) == 0);
LAB_024dcd80:
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_60,*(undefined8 *)PTR_DAT_049c13b8);
        }
      }
      else {
        uVar6 = 1;
      }
      return uVar6 & 1;
    }
  }
  return 0;
}

