/* IL2CPP: ConveyorArrowSystem$$OnUpdate
void ConveyorArrowSystem__OnUpdate (ConveyorArrowSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorArrowSystem$$OnUpdate
   void ConveyorArrowSystem__OnUpdate (ConveyorArrowSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void ConveyorArrowSystem__OnUpdate_24b1868(float param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_28;
  
  if ((bRam0000000004f4bb66 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6b50);
    FUN_021f03f8(PTR_DAT_049c6b58);
    FUN_021f03f8(PTR_DAT_049c6b60);
    FUN_021f03f8(PTR_DAT_049c6b68);
    FUN_021f03f8(PTR_DAT_049c6b70);
    FUN_021f03f8(PTR_DAT_049c6b78);
    bRam0000000004f4bb66 = 1;
  }
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  SystemBase__OnUpdate_2555ef8(param_1,param_2,0);
  if (*(char *)(param_2 + 0x60) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_2 + 0x58);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
      return;
    }
    fVar14 = *(float *)(param_2 + 100);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar6,0,&lStack_78,*(undefined8 *)PTR_DAT_049c6b78);
    if ((lStack_78 != 0) && (*(long *)(param_2 + 0x30) != 0)) {
      fVar12 = *(float *)(*(long *)(param_2 + 0x30) + 0x48);
      fVar14 = fVar14 + *(float *)(lStack_78 + 0x278) * param_1;
      fVar14 = fVar14 - fVar12 * (float)(int)(fVar14 / fVar12);
      if (fVar14 <= fVar12) {
        fVar12 = fVar14;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar14) {
        fVar13 = fVar12;
      }
      *(float *)(param_2 + 100) = fVar13;
      if (*(long *)(param_2 + 0x38) != 0) {
        dVar11 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410
                                   (0,*(long *)(param_2 + 0x38),1,0);
        if (*(long *)(param_2 + 0x58) != 0) {
                    /* try { // try from 025b199c to 026b19e7 has its CatchHandler @ 025b199c
                       catch() { ... } // from try @ 025b199c with catch @ 025b199c
                       catch() { ... } // from try @ 025b19fc with catch @ 025b199c
                       catch() { ... } // from try @ 025b1a3c with catch @ 025b199c
                       catch() { ... } // from try @ 025b1a74 with catch @ 025b199c */
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_2 + 0x58),&lStack_78,*(undefined8 *)PTR_DAT_049c6b68);
          puVar4 = PTR_DAT_049c6b60;
          puVar3 = PTR_DAT_049c6b58;
          uStack_58 = plStack_70;
          lStack_60 = lStack_78;
          uStack_50 = uStack_68;
          lStack_78 = 0;
          plStack_70 = &lStack_60;
          while( true ) {
            uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&lStack_60,*(undefined8 *)puVar3);
            if ((uVar7 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&lStack_60,*(undefined8 *)PTR_DAT_049c6b50);
              return;
            }
            lVar10 = *(long *)puVar4;
                    /* try { // try from 025b19e8 to 026b19fb has its CatchHandler @ 025b1a0c */
            lVar8 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
            lVar6 = lVar8;
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_02229718();
                    /* try { // try from 025b19fc to 026b1a23 has its CatchHandler @ 025b199c */
              lVar8 = *(long *)(lVar10 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b19e8 with catch @ 025b1a0c
                        */
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
                    /* try { // try from 025b1a24 to 026b1a3b has its CatchHandler @ 025b1a6c */
              lVar8 = FUN_02229718();
            }
                    /* try { // try from 025b1a3c to 026b1a5b has its CatchHandler @ 025b199c */
            uVar9 = thunk_FUN_0224e54c(&lStack_60,
                                       *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                       0x60);
            func_0x04608620(&plStack_28,uVar9,uVar1);
            plVar5 = plStack_28;
            if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* try { // try from 025b1a5c to 026b1a6b has its CatchHandler @ 025b1a6c */
            lVar6 = UnityEngine_Component__get_gameObject_3c187f4(plStack_28,0);
            if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* catch() { ... } // from try @ 025b1a24 with catch @ 025b1a6c
                       catch() { ... } // from try @ 025b1a5c with catch @ 025b1a6c */
            if (lVar6 == 0) break;
                    /* try { // try from 025b1a70 to 026b1a73 has its CatchHandler @ 025b1a7c */
                    /* try { // try from 025b1a74 to 026b1a7f has its CatchHandler @ 025b199c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b1a70 with catch @ 025b1a7c
                        */
            UnityEngine_GameObject__SetActive_3c1ce34
                      (lVar6,dVar11 < *(double *)(*(long *)(param_2 + 0x48) + 0x170),0);
            lVar6 = *plVar5;
            (**(code **)(lVar6 + 0x2e8))(dVar11,plVar5,0,0,*(undefined8 *)(lVar6 + 0x2f0));
            if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            dVar11 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410
                                       (dVar11,*(undefined4 *)(*(long *)(param_2 + 0x30) + 0x48),
                                        *(long *)(param_2 + 0x38),1,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

