/* IL2CPP: Extensions$$TryGetRuntimeParameterValues
bool Extensions__TryGetRuntimeParameterValues (UnityEngine_Animator_o* target, System_Collections_Generic_List_AnimatorRuntimeParameter__o* runtimeParameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$TryGetRuntimeParameterValues
   bool Extensions__TryGetRuntimeParameterValues (UnityEngine_Animator_o* target,
   System_Collections_Generic_List_AnimatorRuntimeParameter__o* runtimeParameters, const MethodInfo*
   method); */

byte Extensions__TryGetRuntimeParameterValues_3f0be90(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte bStack_64;
  undefined2 uStack_63;
  undefined1 uStack_61;
  
  if ((bRam0000000004f5c3ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39b08);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f5c3ca = 1;
  }
  puVar2 = PTR_DAT_049b3b98;
  if (param_1 == 0) {
LAB_0400c088:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = UnityEngine_Animator__get_runtimeAnimatorController_3bb47a4(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 0400bf10 to 0410bf87 has its CatchHandler @ 0400bf10
                       catch() { ... } // from try @ 0400bf10 with catch @ 0400bf10
                       catch() { ... } // from try @ 0400c0b0 with catch @ 0400bf10
                       catch() { ... } // from try @ 0400c170 with catch @ 0400bf10
                       catch() { ... } // from try @ 0400c1c0 with catch @ 0400bf10
                       catch() { ... } // from try @ 0400c1e8 with catch @ 0400bf10 */
    FUN_021f0574(*(long *)puVar2);
  }
  bVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar7,0,0);
  if ((bVar3 & 1) == 0 && param_2 != 0) {
    lVar8 = UnityEngine_Animator__get_parameters_3bb2148(param_1,0);
    puVar2 = PTR_DAT_04a39b08;
    if (lVar8 == 0) goto LAB_0400c088;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0400c088;
        uVar4 = UnityEngine_AnimatorControllerParameter__get_nameHash_3bb6964(lVar10,0);
                    /* try { // try from 0400bf88 to 0410bf93 has its CatchHandler @ 0400c1a0 */
        uVar5 = UnityEngine_AnimatorControllerParameter__get_type_3bb696c(lVar10,0);
        iVar6 = UnityEngine_AnimatorControllerParameter__get_type_3bb696c(lVar10,0);
        uVar12 = 0;
        if (iVar6 < 4) {
          if (iVar6 == 1) {
                    /* try { // try from 0400bff0 to 0410bffb has its CatchHandler @ 0400c174 */
            uVar12 = UnityEngine_Animator__GetFloat_3bad360(param_1,uVar4,0);
LAB_0400bffc:
            uStack_68 = 0;
          }
          else {
            if (iVar6 != 3) {
LAB_0400c090:
                    /* try { // try from 0400c090 to 0410c0af has its CatchHandler @ 0400c198 */
              thunk_FUN_02256840(PTR_DAT_049b5000);
              uVar7 = thunk_FUN_0222ca34();
              System_ArgumentOutOfRangeException___ctor_306d788(uVar7,0);
                    /* try { // try from 0400c0b0 to 0410c0ef has its CatchHandler @ 0400bf10 */
              uVar9 = thunk_FUN_02256840(PTR_DAT_04a39b10);
                    /* WARNING: Subroutine does not return */
              FUN_021f0564(uVar7,uVar9);
            }
                    /* try { // try from 0400bfcc to 0410bfd3 has its CatchHandler @ 0400c178 */
            uStack_68 = UnityEngine_Animator__GetInteger_3badecc(param_1,uVar4,0);
          }
          bStack_64 = 0;
        }
        else {
          if (iVar6 != 4) {
            if (iVar6 != 9) goto LAB_0400c090;
            goto LAB_0400bffc;
          }
                    /* try { // try from 0400c014 to 0410c01b has its CatchHandler @ 0400c19c */
          bStack_64 = UnityEngine_Animator__GetBool_3bada54(param_1,uVar4,0);
          uStack_68 = 0;
          bStack_64 = bStack_64 & 1;
        }
                    /* try { // try from 0400c040 to 0410c043 has its CatchHandler @ 0400c198 */
        uStack_63 = 0;
        uStack_61 = 0;
        uStack_74 = uVar5;
        uStack_70 = uVar4;
        uStack_6c = uVar12;
        FUN_02333498(param_2,&uStack_74,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar11 = uVar11 + 1;
                    /* try { // try from 0400c058 to 0410c05f has its CatchHandler @ 0400c1a0 */
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  return ((bVar3 | param_2 == 0) ^ 0xff) & 1;
}

