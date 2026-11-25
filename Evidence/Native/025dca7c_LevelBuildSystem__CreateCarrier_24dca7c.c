/* IL2CPP: LevelBuildSystem$$CreateCarrier
Carrier_o* LevelBuildSystem__CreateCarrier (LevelBuildSystem_o* __this, int32_t carrierType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$CreateCarrier
   Carrier_o* LevelBuildSystem__CreateCarrier (LevelBuildSystem_o* __this, int32_t carrierType,
   const MethodInfo* method); */

long LevelBuildSystem__CreateCarrier_24dca7c(long param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_50;
  long lStack_48;
  
                    /* try { // try from 025dca84 to 026dcadb has its CatchHandler @ 025dc908 */
  if ((bRam0000000004f4bc52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c29e8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dca78 with catch @ 025dcab8
                        */
    FUN_021f03f8(PTR_DAT_049c7890);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dc9e8 with catch @ 025dcabc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dca0c with catch @ 025dcac0
                        */
    FUN_021f03f8(PTR_DAT_049c7898);
    FUN_021f03f8(PTR_DAT_049c78a0);
                    /* try { // try from 025dcadc to 026dcadf has its CatchHandler @ 025dcb00 */
    FUN_021f03f8(PTR_DAT_049c2a08);
                    /* try { // try from 025dcae0 to 026dcb03 has its CatchHandler @ 025dc908 */
    FUN_021f03f8(PTR_DAT_049c78a8);
    FUN_021f03f8(PTR_DAT_049c78b0);
                    /* catch() { ... } // from try @ 025dcadc with catch @ 025dcb00 */
    FUN_021f03f8(PTR_DAT_049c2788);
                    /* try { // try from 025dcb04 to 026dcb0b has its CatchHandler @ 025dcb14 */
    bRam0000000004f4bc52 = 1;
  }
                    /* try { // try from 025dcb0c to 026dcb17 has its CatchHandler @ 025dc908 */
  lVar10 = *(long *)(param_1 + 0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025dcb04 with catch @ 025dcb14
                        */
  plStack_50 = (long *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar10 != 0) {
    uStack_68 = *(undefined8 *)(lVar10 + 0x40);
    uStack_70 = *(undefined8 *)(lVar10 + 0x38);
    uStack_60 = *(undefined8 *)(lVar10 + 0x48);
    lVar10 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                       (&uStack_70,*(undefined8 *)PTR_DAT_049c2788);
    if (lVar10 != 0) {
      uVar6 = CarrierSheet_Row__TryGetCarrierFeatures_255b274(lVar10,param_2,&lStack_48,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        if (lStack_48 == 0) goto LAB_025dce40;
                    /* try { // try from 025dcb80 to 026dcc87 has its CatchHandler @ 025dcb80
                       catch() { ... } // from try @ 025dcb80 with catch @ 025dcb80
                       catch() { ... } // from try @ 025dccf8 with catch @ 025dcb80
                       catch() { ... } // from try @ 025dcd7c with catch @ 025dcb80
                       catch() { ... } // from try @ 025dcd9c with catch @ 025dcb80
                       catch() { ... } // from try @ 025dcdd0 with catch @ 025dcb80
                       catch() { ... } // from try @ 025dce1c with catch @ 025dcb80 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_48,&uStack_b8,*(undefined8 *)PTR_DAT_049c78a8);
        puVar3 = PTR_DAT_049c78a0;
        puVar2 = PTR_DAT_049c7898;
        uStack_90 = CONCAT44(uStack_b4,uStack_b8);
        uStack_88 = uStack_b0;
        uStack_78 = uStack_a0;
        uStack_80 = uStack_a8;
        do {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_90,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            uVar13 = 0;
            break;
          }
          lVar14 = *(long *)puVar3;
          lVar7 = *(long *)(lVar14 + 0x20);
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar10 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_02229718();
            lVar7 = *(long *)(lVar14 + 0x20);
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          uVar13 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_02229718();
          }
          uVar8 = thunk_FUN_0224e54c(&uStack_90,
                                     *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60
                                    );
          func_0x04608620(&uStack_b8,uVar8,uVar13);
          uVar13 = uStack_b8;
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar6 = Carriers__TryGet_24b6850(*(long *)(param_1 + 0x60),uStack_b8,&uStack_98,0);
        } while ((uVar6 & 1) == 0);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)PTR_DAT_049c7890);
      }
      puVar2 = PTR_DAT_049c78b0;
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar8 = Carriers__Get_24b67a0(*(long *)(param_1 + 0x60),uVar13,0);
                    /* try { // try from 025dcc88 to 026dcc8f has its CatchHandler @ 025dcdac */
        lVar10 = PrefabModuleExtensions__Rent_object__269ee0c
                           (*(undefined8 *)(param_1 + 0x30),uVar8,*(undefined8 *)(param_1 + 0x88),
                            *(undefined8 *)puVar2);
        puVar2 = PTR_DAT_049c29e8;
        if (lVar10 != 0) {
                    /* try { // try from 025dccac to 026dccf7 has its CatchHandler @ 025dcdb0 */
          Carrier__SetType_2408724(lVar10,param_2,0);
          uVar6 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                            (lVar10,&plStack_50,*(undefined8 *)puVar2);
          if ((uVar6 & 1) != 0) {
            if (lStack_48 == 0) goto LAB_025dce40;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (lStack_48,&uStack_b8,*(undefined8 *)PTR_DAT_049c78a8);
            puVar4 = PTR_DAT_049c78a0;
            puVar3 = PTR_DAT_049c7898;
            puVar2 = PTR_DAT_049c2a08;
                    /* try { // try from 025dccf8 to 026dcd07 has its CatchHandler @ 025dcb80 */
            uStack_88 = uStack_b0;
                    /* try { // try from 025dcd08 to 026dcd13 has its CatchHandler @ 025dcda8 */
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                     (&uStack_90,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
              lVar12 = *(long *)puVar4;
              lVar14 = *(long *)(lVar12 + 0x20);
              uVar1 = *(ushort *)(lVar14 + 0x135);
              lVar7 = lVar14;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_02229718();
                lVar14 = *(long *)(lVar12 + 0x20);
                    /* try { // try from 025dcd50 to 026dcd7b has its CatchHandler @ 025dcda4 */
                uVar1 = *(ushort *)(lVar14 + 0x135);
              }
              uVar13 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
              if ((uVar1 & 1) == 0) {
                lVar14 = FUN_02229718();
              }
                    /* try { // try from 025dcd7c to 026dcd97 has its CatchHandler @ 025dcb80 */
              uVar8 = thunk_FUN_0224e54c(&uStack_90,
                                         *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) +
                                         0x60);
              func_0x04608620(&uStack_b8,uVar8,uVar13);
              plVar5 = plStack_50;
              uVar8 = uStack_b0;
              uVar13 = uStack_b8;
                    /* try { // try from 025dcd98 to 026dcd9b has its CatchHandler @ 025dcda0 */
                    /* try { // try from 025dcd9c to 026dcdcb has its CatchHandler @ 025dcb80 */
              if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dcd98 with catch @ 025dcda0
                        */
              lVar7 = *plStack_50;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dcd50 with catch @ 025dcda4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dcd08 with catch @ 025dcda8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dcc88 with catch @ 025dcdac
                        */
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025dccac with catch @ 025dcdb0
                        */
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_025dcdf0;
                  }
                  uVar6 = uVar6 - 1;
                    /* try { // try from 025dcdcc to 026dcdcf has its CatchHandler @ 025dce10 */
                  piVar11 = piVar11 + 4;
                    /* try { // try from 025dcdd0 to 026dce13 has its CatchHandler @ 025dcb80 */
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)puVar2,0);
LAB_025dcdf0:
              (*(code *)*puVar9)(plVar5,uVar13,uVar8,puVar9[1]);
            }
                    /* catch() { ... } // from try @ 025dcdcc with catch @ 025dce10 */
                    /* try { // try from 025dce14 to 026dce1b has its CatchHandler @ 025dce24 */
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_90,*(undefined8 *)PTR_DAT_049c7890);
          }
                    /* try { // try from 025dce1c to 026dce27 has its CatchHandler @ 025dcb80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025dce14 with catch @ 025dce24
                        */
          return lVar10;
        }
      }
    }
  }
LAB_025dce40:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

