/* IL2CPP: Extensions$$SetRuntimeParameterValues
bool Extensions__SetRuntimeParameterValues (UnityEngine_Animator_o* target, System_Collections_Generic_List_AnimatorRuntimeParameter__o* runtimeParameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetRuntimeParameterValues
   bool Extensions__SetRuntimeParameterValues (UnityEngine_Animator_o* target,
   System_Collections_Generic_List_AnimatorRuntimeParameter__o* runtimeParameters, const MethodInfo*
   method); */

byte Extensions__SetRuntimeParameterValues_3f0c0c4(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f5c3cb & 1) == 0) {
                    /* try { // try from 0400c0f0 to 0410c0fb has its CatchHandler @ 0400c188 */
    FUN_021f03f8(PTR_DAT_04a39b18);
    FUN_021f03f8(PTR_DAT_04a39b20);
    FUN_021f03f8(PTR_DAT_04a39b28);
                    /* try { // try from 0400c110 to 0410c113 has its CatchHandler @ 0400c170 */
    FUN_021f03f8(PTR_DAT_04a39b30);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0400c128 to 0410c12f has its CatchHandler @ 0400c1a0 */
    bRam0000000004f5c3cb = 1;
  }
  puVar3 = PTR_DAT_049b3b98;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar6 = UnityEngine_Animator__get_runtimeAnimatorController_3bb47a4(param_1,0);
                    /* try { // try from 0400c158 to 0410c15b has its CatchHandler @ 0400c194 */
                    /* try { // try from 0400c15c to 0410c15f has its CatchHandler @ 0400c190 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 0400c160 to 0410c163 has its CatchHandler @ 0400c18c */
                    /* try { // try from 0400c164 to 0410c167 has its CatchHandler @ 0400c184 */
    FUN_021f0574(*(long *)puVar3);
  }
                    /* try { // try from 0400c168 to 0410c16b has its CatchHandler @ 0400c180 */
                    /* try { // try from 0400c16c to 0410c16f has its CatchHandler @ 0400c17c */
                    /* catch() { ... } // from try @ 0400c110 with catch @ 0400c170
                       try { // try from 0400c170 to 0410c1bb has its CatchHandler @ 0400bf10 */
                    /* catch() { ... } // from try @ 0400bff0 with catch @ 0400c174 */
  bVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
                    /* catch() { ... } // from try @ 0400bfcc with catch @ 0400c178 */
                    /* catch() { ... } // from try @ 0400c16c with catch @ 0400c17c */
                    /* catch() { ... } // from try @ 0400c168 with catch @ 0400c180 */
                    /* catch() { ... } // from try @ 0400c164 with catch @ 0400c184 */
  if (param_2 == 0 || (bVar5 & 1) != 0) {
LAB_0400c2d0:
    return ((param_2 == 0 | bVar5) ^ 0xff) & 1;
  }
                    /* catch() { ... } // from try @ 0400c0f0 with catch @ 0400c188 */
                    /* catch() { ... } // from try @ 0400c160 with catch @ 0400c18c */
                    /* catch() { ... } // from try @ 0400c15c with catch @ 0400c190 */
                    /* catch() { ... } // from try @ 0400c158 with catch @ 0400c194 */
                    /* catch() { ... } // from try @ 0400c040 with catch @ 0400c198
                       catch() { ... } // from try @ 0400c090 with catch @ 0400c198 */
                    /* catch() { ... } // from try @ 0400c014 with catch @ 0400c19c */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&iStack_88,*(undefined8 *)PTR_DAT_04a39b30);
  puVar4 = PTR_DAT_04a39b28;
  puVar3 = PTR_DAT_04a39b20;
                    /* catch() { ... } // from try @ 0400bf88 with catch @ 0400c1a0
                       catch() { ... } // from try @ 0400c058 with catch @ 0400c1a0
                       catch() { ... } // from try @ 0400c128 with catch @ 0400c1a0 */
  uStack_48 = uStack_70;
                    /* try { // try from 0400c1bc to 0410c1bf has its CatchHandler @ 0400c1dc */
  uStack_40 = uStack_68;
                    /* try { // try from 0400c1c0 to 0410c1df has its CatchHandler @ 0400bf10 */
  do {
    while( true ) {
      while( true ) {
        uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_60,*(undefined8 *)PTR_DAT_04a39b18);
          goto LAB_0400c2d0;
        }
                    /* catch() { ... } // from try @ 0400c1bc with catch @ 0400c1dc */
        lVar11 = *(long *)puVar4;
                    /* try { // try from 0400c1e0 to 0410c1e7 has its CatchHandler @ 0400c1f0 */
        lVar8 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 0400c1e8 to 0410c1f3 has its CatchHandler @ 0400bf10 */
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar9 = lVar8;
        if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0400c1e0 with catch @ 0400c1f0 */
          lVar9 = FUN_02229718();
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar6 = thunk_FUN_0224e54c(&uStack_60,
                                   *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&iStack_88,uVar6,uVar1);
        if (3 < iStack_88) break;
        if (iStack_88 == 1) {
          UnityEngine_Animator__SetFloat_3bad764(uStack_80,param_1,uStack_84,0);
        }
        else {
          if (iStack_88 != 3) goto LAB_0400c2ec;
          UnityEngine_Animator__SetInteger_3bae104(param_1,uStack_84,uStack_7c,0);
        }
      }
      if (iStack_88 != 4) break;
      UnityEngine_Animator__SetBool_3badc8c(param_1,uStack_84,cStack_78 != '\0',0);
    }
  } while (iStack_88 == 9);
LAB_0400c2ec:
  thunk_FUN_02256840(PTR_DAT_049b5000);
  uVar6 = thunk_FUN_0222ca34();
  System_ArgumentOutOfRangeException___ctor_306d788(uVar6,0);
  uVar10 = thunk_FUN_02256840(PTR_DAT_04a39b38);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar6,uVar10);
}

