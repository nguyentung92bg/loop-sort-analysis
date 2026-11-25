/* IL2CPP: Extensions$$ShuffleDeranged<__Il2CppFullySharedGenericType>
void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, const MethodInfo_25F0438* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ShuffleDeranged<__Il2CppFullySharedGenericType>
   void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, const MethodInfo_25F0438* method); */

void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType__25f0438(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  int aiStack_a0 [4];
  long lStack_90;
  long lStack_88;
  int *piStack_80;
  int *piStack_78;
  int iStack_6c;
  long lStack_68;
  
  lStack_88 = tpidr_el0;
  lStack_68 = *(long *)(lStack_88 + 0x28);
  lVar14 = *(long *)(param_2 + 0x38);
  if (lVar14 == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    lVar14 = *(long *)(param_2 + 0x38);
    if (lVar14 == 0) {
      FUN_02229774(param_2);
      lVar14 = *(long *)(param_2 + 0x38);
    }
  }
  uVar13 = (ulong)*(uint *)(*(long *)(lVar14 + 0x28) + 0xfc);
  uVar9 = uVar13 + 0xf & 0x1fffffff0;
  piVar12 = (int *)((long)aiStack_a0 - uVar9);
  piVar15 = (int *)((long)piVar12 - uVar9);
  lStack_90 = (long)piVar15 - uVar9;
  func_0x04608670(lStack_90,0,uVar13);
  if (param_1 != (long *)0x0) {
    lVar14 = *(long *)(lVar14 + 8);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02229718(lVar14);
    }
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar14) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026f0544;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
LAB_026f0544:
    iVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (1 < iVar1) {
      lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02229718(lVar14);
      }
      lVar7 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar14) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_026f05c0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
LAB_026f05c0:
      uVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
      lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02229718(lVar14);
      }
      plVar5 = (long *)FUN_021f04e4(lVar14,uVar2);
      uVar9 = 0;
                    /* try { // try from 026f0608 to 027f06d3 has its CatchHandler @ 026f0608
                       catch() { ... } // from try @ 026f0608 with catch @ 026f0608
                       catch() { ... } // from try @ 026f0740 with catch @ 026f0608
                       catch() { ... } // from try @ 026f0768 with catch @ 026f0608
                       catch() { ... } // from try @ 026f0794 with catch @ 026f0608
                       catch() { ... } // from try @ 026f080c with catch @ 026f0608
                       catch() { ... } // from try @ 026f0968 with catch @ 026f0608
                       catch() { ... } // from try @ 026f0994 with catch @ 026f0608
                       catch() { ... } // from try @ 026f09b8 with catch @ 026f0608 */
      do {
        lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_02229718(lVar14);
        }
        lVar7 = *param_1;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar14) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_026f0674;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
LAB_026f0674:
        iVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
        if ((long)iVar1 <= (long)uVar9) {
          iVar1 = 0;
          do {
                    /* try { // try from 026f0790 to 027f0793 has its CatchHandler @ 026f0798 */
                    /* try { // try from 026f0794 to 027f07b7 has its CatchHandler @ 026f0608 */
                    /* catch() { ... } // from try @ 026f0790 with catch @ 026f0798 */
                    /* catch() { ... } // from try @ 026f075c with catch @ 026f079c */
            aiStack_a0[3] = iVar1;
            if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
              FUN_021f0574();
            }
            Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8
                      (param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x30));
            uVar9 = 0;
            do {
                    /* try { // try from 026f07b8 to 027f07cf has its CatchHandler @ 026f095c */
              lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_02229718(lVar14);
              }
              lVar7 = *param_1;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                    /* try { // try from 026f07ec to 027f07ef has its CatchHandler @ 026f0958 */
                    /* try { // try from 026f07f0 to 027f0803 has its CatchHandler @ 026f0954 */
                  if (*(long *)(piVar11 + -2) == lVar14) {
                    /* try { // try from 026f081c to 027f082b has its CatchHandler @ 026f095c */
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_026f0820;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
                    /* try { // try from 026f0808 to 027f080b has its CatchHandler @ 026f0950 */
                    /* try { // try from 026f080c to 027f081b has its CatchHandler @ 026f0608 */
              puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
LAB_026f0820:
              iVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
                    /* try { // try from 026f082c to 027f083b has its CatchHandler @ 026f094c */
              if ((long)iVar1 <= (long)uVar9) goto LAB_026f0cf0;
                    /* try { // try from 026f083c to 027f086f has its CatchHandler @ 026f0948 */
              plVar6 = (long *)FUN_026b1a00(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x38));
              lVar14 = **(long **)(param_2 + 0x38);
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_02229718(lVar14);
              }
              lVar7 = *param_1;
              iStack_6c = (int)uVar9;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                    /* try { // try from 026f0874 to 027f0877 has its CatchHandler @ 026f0944 */
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                    /* try { // try from 026f0880 to 027f0897 has its CatchHandler @ 026f0940 */
                  if (*(long *)(piVar11 + -2) == lVar14) {
                    lVar14 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
                    goto LAB_026f08b0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
                    /* try { // try from 026f0898 to 027f08b3 has its CatchHandler @ 026f093c */
              lVar14 = FUN_02229a4c(param_1,lVar14,0);
LAB_026f08b0:
                    /* try { // try from 026f08bc to 027f08d3 has its CatchHandler @ 026f0938 */
              lVar14 = *(long *)(lVar14 + 8);
              piStack_80 = &iStack_6c;
              piStack_78 = piVar12;
              (**(code **)(lVar14 + 0x10))
                        (*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar12);
              if (plVar5 == (long *)0x0) goto LAB_026f0d3c;
                    /* try { // try from 026f08d4 to 027f08ef has its CatchHandler @ 026f0934 */
              if (*(uint *)(plVar5 + 3) <= uVar9) goto LAB_026f0d24;
                    /* try { // try from 026f08f0 to 027f092f has its CatchHandler @ 026f0930 */
              func_0x04608620(piVar15,(long)plVar5 + uVar9 * *(uint *)(*plVar5 + 0x104) + 0x20,
                              uVar13);
              if (plVar6 == (long *)0x0) goto LAB_026f0d3c;
              piStack_80 = piVar12;
              piStack_78 = piVar15;
              if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0x38) + 0x28) + 0x28)) {
                piStack_80 = *(int **)piVar12;
                piStack_78 = *(int **)piVar15;
              }
                    /* catch() { ... } // from try @ 026f08f0 with catch @ 026f0930 */
              lVar14 = *(long *)(*plVar6 + 0x1c0);
                    /* catch() { ... } // from try @ 026f08d4 with catch @ 026f0934 */
                    /* catch() { ... } // from try @ 026f08bc with catch @ 026f0938 */
              (**(code **)(lVar14 + 0x10))
                        (*(undefined8 *)(lVar14 + 8),lVar14,plVar6,&piStack_80,&iStack_6c);
                    /* catch() { ... } // from try @ 026f0898 with catch @ 026f093c */
                    /* catch() { ... } // from try @ 026f0880 with catch @ 026f0940 */
              uVar9 = uVar9 + 1;
                    /* catch() { ... } // from try @ 026f0874 with catch @ 026f0944 */
            } while ((char)iStack_6c == '\0');
                    /* catch() { ... } // from try @ 026f083c with catch @ 026f0948 */
                    /* catch() { ... } // from try @ 026f082c with catch @ 026f094c */
                    /* catch() { ... } // from try @ 026f0808 with catch @ 026f0950 */
                    /* catch() { ... } // from try @ 026f07f0 with catch @ 026f0954 */
            iVar1 = aiStack_a0[3] + 1;
                    /* catch() { ... } // from try @ 026f07ec with catch @ 026f0958 */
                    /* catch() { ... } // from try @ 026f07b8 with catch @ 026f095c
                       catch() { ... } // from try @ 026f081c with catch @ 026f095c */
          } while (iVar1 != 100);
                    /* try { // try from 026f0964 to 027f0967 has its CatchHandler @ 026f09c0 */
          lVar14 = **(long **)(param_2 + 0x38);
                    /* try { // try from 026f0968 to 027f098f has its CatchHandler @ 026f0608 */
                    /* catch() { ... } // from try @ 026f06d4 with catch @ 026f096c */
                    /* catch() { ... } // from try @ 026f06f4 with catch @ 026f0970 */
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_02229718(lVar14);
          }
          lVar7 = lStack_90;
          lVar8 = *param_1;
          iStack_6c = 0;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 026f0990 to 027f0993 has its CatchHandler @ 026f09ac */
          if (uVar9 == 0) {
LAB_026f09b4:
                    /* try { // try from 026f09b8 to 027f09c3 has its CatchHandler @ 026f0608 */
            lVar14 = FUN_02229a4c(param_1,lVar14,0);
                    /* catch() { ... } // from try @ 026f0964 with catch @ 026f09c0
                       catch() { ... } // from try @ 026f09b0 with catch @ 026f09c0 */
          }
          else {
                    /* try { // try from 026f0994 to 027f09af has its CatchHandler @ 026f0608 */
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            while (*(long *)(piVar15 + -2) != lVar14) {
              uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 026f0990 with catch @ 026f09ac */
              piVar15 = piVar15 + 4;
                    /* try { // try from 026f09b0 to 027f09b7 has its CatchHandler @ 026f09c0 */
              if (uVar9 == 0) goto LAB_026f09b4;
            }
            lVar14 = lVar8 + (long)*piVar15 * 0x10 + 0x138;
          }
          lVar14 = *(long *)(lVar14 + 8);
          piStack_80 = &iStack_6c;
          piStack_78 = piVar12;
          (**(code **)(lVar14 + 0x10))
                    (*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar12);
          func_0x04608620(lVar7,piVar12,uVar13);
          iVar1 = 0;
          do {
            lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 8);
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_02229718(lVar14);
            }
            lVar8 = *param_1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar14) {
                  puVar4 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_026f0a70;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
LAB_026f0a70:
            iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
            if (iVar3 + -1 <= iVar1) {
              lVar14 = (*(long **)(param_2 + 0x38))[1];
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_02229718(lVar14);
              }
              lVar8 = *param_1;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 == 0) {
LAB_026f0c08:
                puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar14,0);
              }
              else {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                while (*(long *)(piVar15 + -2) != lVar14) {
                  uVar9 = uVar9 - 1;
                  piVar15 = piVar15 + 4;
                  if (uVar9 == 0) goto LAB_026f0c08;
                }
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              }
              iVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
              func_0x04608620(piVar12,lVar7,uVar13);
              plVar5 = *(long **)(param_2 + 0x38);
              lVar14 = *plVar5;
              if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_02229718(lVar14);
                plVar5 = *(long **)(param_2 + 0x38);
              }
              iStack_6c = iVar1 + -1;
              if (-1 < *(int *)(plVar5[5] + 0x28)) {
                piVar12 = *(int **)piVar12;
              }
              lVar7 = *param_1;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 == 0) {
LAB_026f0cac:
                lVar14 = FUN_02229a4c(param_1,lVar14,1);
              }
              else {
                piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                while (*(long *)(piVar15 + -2) != lVar14) {
                  uVar9 = uVar9 - 1;
                  piVar15 = piVar15 + 4;
                  if (uVar9 == 0) goto LAB_026f0cac;
                }
                lVar14 = lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138;
              }
              piStack_80 = &iStack_6c;
              lVar14 = *(long *)(lVar14 + 8);
              piStack_78 = piVar12;
              (**(code **)(lVar14 + 0x10))
                        (*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar12);
              goto LAB_026f0cf0;
            }
            lVar14 = **(long **)(param_2 + 0x38);
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_02229718(lVar14);
            }
            lVar8 = *param_1;
            iVar3 = iVar1 + 1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            iStack_6c = iVar3;
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar14) {
                  lVar14 = lVar8 + (long)*piVar15 * 0x10 + 0x138;
                  goto LAB_026f0af8;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            lVar14 = FUN_02229a4c(param_1,lVar14,0);
LAB_026f0af8:
            lVar14 = *(long *)(lVar14 + 8);
                    /* try { // try from 026f0b08 to 027f0cfb has its CatchHandler @ 026f0b08
                       catch() { ... } // from try @ 026f0b08 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f114c with catch @ 026f0b08
                       catch() { ... } // from try @ 026f177c with catch @ 026f0b08
                       catch() { ... } // from try @ 026f1880 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f19a4 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f1b24 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f1fd8 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f20b4 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f216c with catch @ 026f0b08
                       catch() { ... } // from try @ 026f21a0 with catch @ 026f0b08
                       catch() { ... } // from try @ 026f21cc with catch @ 026f0b08
                       catch() { ... } // from try @ 026f2218 with catch @ 026f0b08 */
            piStack_80 = &iStack_6c;
            piStack_78 = piVar12;
            (**(code **)(lVar14 + 0x10))
                      (*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar12);
            plVar5 = *(long **)(param_2 + 0x38);
            lVar14 = *plVar5;
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_02229718(lVar14);
              plVar5 = *(long **)(param_2 + 0x38);
            }
            piVar15 = piVar12;
            if (-1 < *(int *)(plVar5[5] + 0x28)) {
              piVar15 = *(int **)piVar12;
            }
            lVar8 = *param_1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            iStack_6c = iVar1;
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar14) {
                  lVar14 = lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138;
                  goto LAB_026f0b9c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            lVar14 = FUN_02229a4c(param_1,lVar14,1);
LAB_026f0b9c:
            lVar14 = *(long *)(lVar14 + 8);
            piStack_80 = &iStack_6c;
            piStack_78 = piVar15;
            (**(code **)(lVar14 + 0x10))
                      (*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar15);
            iVar1 = iVar3;
          } while( true );
        }
        lVar14 = **(long **)(param_2 + 0x38);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_02229718(lVar14);
        }
        lVar7 = *param_1;
        iStack_6c = (int)uVar9;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar14) {
              lVar14 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_026f06f4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
                    /* try { // try from 026f06d4 to 027f06db has its CatchHandler @ 026f096c */
          } while (uVar10 != 0);
        }
        lVar14 = FUN_02229a4c(param_1,lVar14,0);
LAB_026f06f4:
                    /* try { // try from 026f06f4 to 027f073f has its CatchHandler @ 026f0970 */
        lVar14 = *(long *)(lVar14 + 8);
        piStack_80 = &iStack_6c;
        piStack_78 = piVar12;
        (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),lVar14,param_1,&piStack_80,piVar12)
        ;
        if (plVar5 == (long *)0x0) goto LAB_026f0d3c;
        if (*(uint *)(plVar5 + 3) <= uVar9) goto LAB_026f0d24;
        func_0x04608620((long)plVar5 + uVar9 * *(uint *)(*plVar5 + 0x104) + 0x20,piVar12,uVar13);
                    /* try { // try from 026f0740 to 027f075b has its CatchHandler @ 026f0608 */
        lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 0x28);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_02229718();
        }
                    /* try { // try from 026f075c to 027f0767 has its CatchHandler @ 026f079c */
        if (*(uint *)(plVar5 + 3) <= uVar9) goto LAB_026f0d24;
                    /* try { // try from 026f0768 to 027f078f has its CatchHandler @ 026f0608 */
        FUN_021f03a8(lVar14,(long)plVar5 + uVar9 * *(uint *)(*plVar5 + 0x104) + 0x20,piVar12);
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
LAB_026f0cf0:
                    /* try { // try from 026f0cfc to 027f0d0b has its CatchHandler @ 026f1088 */
  if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* try { // try from 026f0d18 to 027f0d1b has its CatchHandler @ 026f1068 */
                    /* try { // try from 026f0d1c to 027f0d33 has its CatchHandler @ 026f1084 */
    return;
  }
LAB_026f0d54:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026f0d54 to 027f0e17 has its CatchHandler @ 026f109c */
  __stack_chk_fail();
LAB_026f0d3c:
  if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  goto LAB_026f0d54;
LAB_026f0d24:
  if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026f0d38 to 027f0d43 has its CatchHandler @ 026f1080 */
    FUN_021f06a8();
  }
  goto LAB_026f0d54;
}

