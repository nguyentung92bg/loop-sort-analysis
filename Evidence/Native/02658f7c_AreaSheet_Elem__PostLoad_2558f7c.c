/* IL2CPP: AreaSheet.Elem$$PostLoad
void AreaSheet_Elem__PostLoad (AreaSheet_Elem_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Elem$$PostLoad
   void AreaSheet_Elem__PostLoad (AreaSheet_Elem_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void AreaSheet_Elem__PostLoad_2558f7c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uStack_54;
  ulong uStack_48;
  
                    /* try { // try from 02658f84 to 02758f8f has its CatchHandler @ 0265940c */
                    /* try { // try from 02658fa0 to 02758fab has its CatchHandler @ 02659408 */
  if ((bRam0000000004f4c0c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
    bRam0000000004f4c0c7 = 1;
  }
  Cathei_BakingSheet_SheetRowElem__PostLoad_22dfde8(param_1,param_2,0);
  uVar5 = AreaSheet_Elem__get_HasRewards_2558ed4(param_1);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar6 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),10,0,0),
       puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0, lVar6 == 0))
    {
LAB_02659100:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02659000 to 0275900b has its CatchHandler @ 02659484 */
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
LAB_02659104:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar7 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar7 = System_String__Split_2f802dc(lVar7,0x3a,0,0), lVar7 == 0))
        goto LAB_02659100;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_02659104;
        uVar9 = *(undefined8 *)(lVar7 + 0x20);
                    /* try { // try from 0265906c to 02759093 has its CatchHandler @ 026594e4 */
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                  (uVar9,1,&uStack_54,*(undefined8 *)puVar4);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_02659104;
        uVar5 = (ulong)uStack_54;
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        uVar9 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
                    /* try { // try from 026590ac to 027590b3 has its CatchHandler @ 02659474 */
        lVar7 = System_Int32__Parse_30fbf68(uVar8,uVar9,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_02659100;
        uStack_48 = uVar5 | lVar7 << 0x20;
        FUN_02333498(*(long *)(param_1 + 0x20),&uStack_48,*(undefined8 *)puVar3);
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  return;
}

