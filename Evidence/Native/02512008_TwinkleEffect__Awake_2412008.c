/* IL2CPP: TwinkleEffect$$Awake
void TwinkleEffect__Awake (TwinkleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TwinkleEffect$$Awake
   void TwinkleEffect__Awake (TwinkleEffect_o* __this, const MethodInfo* method); */

void TwinkleEffect__Awake_2412008(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
                    /* try { // try from 0251200c to 026120d7 has its CatchHandler @ 02511c44 */
  if ((bRam0000000004f4b72a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b98);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049be640);
    bRam0000000004f4b72a = 1;
  }
  puVar1 = PTR_DAT_049bc0c8;
  plVar4 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar8 = *(long *)puVar1;
    plVar9 = plVar4;
    if (*plVar4 != lVar8) {
      plVar9 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar9;
    if (*plVar4 != lVar8) {
      plVar4 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c(param_1 + 0x38,plVar4);
  lVar8 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  puVar2 = PTR_DAT_049c2b98;
  puVar1 = PTR_DAT_049be640;
  if (lVar8 == 0) {
LAB_02512278:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0);
                    /* try { // try from 025120d8 to 026120e7 has its CatchHandler @ 025120ec */
                    /* catch() { ... } // from try @ 02511ff0 with catch @ 025120e8 */
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar2,iVar3);
                    /* catch() { ... } // from try @ 025120d8 with catch @ 025120ec */
                    /* try { // try from 025120f0 to 026120f3 has its CatchHandler @ 025120fc */
                    /* try { // try from 025120f4 to 026120ff has its CatchHandler @ 02511c44 */
  plVar4 = (long *)(param_1 + 0x40);
  *plVar4 = lVar8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025120f0 with catch @ 025120fc
                        */
  thunk_FUN_021f190c(plVar4,lVar8);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar1,iVar3);
  plVar9 = (long *)(param_1 + 0x48);
  *plVar9 = lVar8;
  thunk_FUN_021f190c(plVar9,lVar8);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar1,iVar3);
  plVar10 = (long *)(param_1 + 0x50);
  *plVar10 = lVar8;
  thunk_FUN_021f190c(plVar10,lVar8);
  puVar1 = PTR_DAT_049bbf90;
  if (0 < iVar3) {
    uVar12 = 0;
    lVar8 = 0x20;
    do {
      lVar13 = *(long *)(param_1 + 0x40);
      lVar5 = UnityEngine_Component__get_transform_3c18724(param_1,0);
      if ((lVar5 == 0) ||
         (plVar6 = (long *)UnityEngine_Transform__GetChild_3c2f8bc(lVar5,uVar12 & 0xffffffff,0),
         lVar13 == 0)) goto LAB_02512278;
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_049bc0c8)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar6);
      }
      uVar11 = (uint)uVar12;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) {
LAB_0251227c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(long **)(lVar13 + lVar8) = plVar6;
      thunk_FUN_021f190c(lVar13 + lVar8,plVar6);
      lVar5 = *plVar4;
      if (lVar5 == 0) goto LAB_02512278;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0251227c;
      lVar5 = *(long *)(lVar5 + lVar8);
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(puVar1);
        cRam0000000004f4a233 = '\x01';
      }
      if (lVar5 == 0) goto LAB_02512278;
      puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc(*puVar7,puVar7[1],puVar7[2],lVar5,0);
      lVar5 = *plVar9;
      if (lVar5 == 0) goto LAB_02512278;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0251227c;
      lVar13 = *plVar10;
      *(undefined4 *)(lVar5 + uVar12 * 4 + 0x20) = 0xbf800000;
      if (lVar13 == 0) goto LAB_02512278;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_0251227c;
      lVar5 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      lVar8 = lVar8 + 8;
      *(undefined4 *)(lVar13 + lVar5 + 0x20) = 0xbf800000;
    } while (iVar3 != (int)uVar12);
  }
  return;
}

