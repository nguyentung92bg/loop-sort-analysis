/* IL2CPP: SandFlowSystem$$DrawCube
void SandFlowSystem__DrawCube (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Mesh_o* mesh, UnityEngine_Matrix4x4_o frame, float share, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$DrawCube
   void SandFlowSystem__DrawCube (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Mesh_o*
   mesh, UnityEngine_Matrix4x4_o frame, float share, const MethodInfo* method); */

void SandFlowSystem__DrawCube_24ca0d8
               (float param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000004f4bbf2 & 1) == 0) {
                    /* catch() { ... } // from try @ 025ca144 with catch @ 025ca120
                       catch() { ... } // from try @ 025ca17c with catch @ 025ca120
                       catch() { ... } // from try @ 025ca1a4 with catch @ 025ca120 */
    FUN_021f03f8(PTR_DAT_049bcf68);
    FUN_021f03f8(PTR_DAT_049c72b8);
    FUN_021f03f8(PTR_DAT_049bcb70);
                    /* try { // try from 025ca13c to 026ca143 has its CatchHandler @ 025ca15c */
    bRam0000000004f4bbf2 = 1;
  }
                    /* try { // try from 025ca144 to 026ca177 has its CatchHandler @ 025ca120 */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ca13c with catch @ 025ca15c
                        */
  if (param_1 <= _UNK_013aa688) {
    return;
  }
  uStack_e8 = param_5[1];
  uStack_f0 = *param_5;
  uStack_d8 = param_5[3];
  uStack_e0 = param_5[2];
  uStack_c8 = param_5[5];
  uStack_d0 = param_5[4];
  uStack_b8 = param_5[7];
  uStack_c0 = param_5[6];
                    /* try { // try from 025ca178 to 026ca17b has its CatchHandler @ 025ca198 */
  if (cRam0000000004f4a190 == '\0') {
                    /* try { // try from 025ca17c to 026ca19b has its CatchHandler @ 025ca120 */
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  if (*(long *)(param_2 + 0x50) != 0) {
                    /* catch() { ... } // from try @ 025ca178 with catch @ 025ca198 */
                    /* try { // try from 025ca19c to 026ca1a3 has its CatchHandler @ 025ca1ac */
                    /* try { // try from 025ca1a4 to 026ca1af has its CatchHandler @ 025ca120 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ca19c with catch @ 025ca1ac
                        */
    param_1 = *(float *)(*(long *)(param_2 + 0x50) + 0x34) * param_1;
                    /* try { // try from 025ca1b0 to 026ca22f has its CatchHandler @ 025ca1b0
                       catch() { ... } // from try @ 025ca1b0 with catch @ 025ca1b0
                       catch() { ... } // from try @ 025ca290 with catch @ 025ca1b0
                       catch() { ... } // from try @ 025ca304 with catch @ 025ca1b0 */
    lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Matrix4x4__Scale_3c07aac
              (&uStack_130,*(float *)(lVar10 + 0xc) * param_1,*(float *)(lVar10 + 0x10) * param_1,
               *(float *)(lVar10 + 0x14) * param_1,0);
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_1e8 = uStack_128;
    uStack_1f0 = uStack_130;
    uStack_1d8 = uStack_118;
    uStack_1e0 = uStack_120;
    uStack_1c8 = uStack_108;
    uStack_1d0 = uStack_110;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    UnityEngine_Matrix4x4__op_Multiply_3c075f4(&uStack_170,&uStack_1b0,&uStack_1f0,0);
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    if ((param_3 != 0) && (lVar10 = *(long *)(param_3 + 0x138), lVar10 != 0)) {
      UnityEngine_Renderer__GetSharedMaterials_3bddd80(lVar10,*(undefined8 *)(param_2 + 0x118),0);
                    /* try { // try from 025ca230 to 026ca23b has its CatchHandler @ 025ca2cc */
      if (*(long *)(param_2 + 0x118) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x118) + 0x18) != 0) {
          if (param_4 == 0) goto LAB_025ca364;
                    /* try { // try from 025ca244 to 026ca28f has its CatchHandler @ 025ca2d0 */
          iVar5 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_4,0);
          puVar2 = PTR_DAT_049bcf68;
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar9 = *(long *)(param_2 + 0x118);
              if (lVar9 == 0) goto LAB_025ca364;
              iVar1 = *(int *)(lVar9 + 0x18) + -1;
              iVar8 = iVar5;
              if (iVar1 <= iVar5) {
                iVar8 = iVar1;
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar9,iVar8,&uStack_f0,*(undefined8 *)PTR_DAT_049bcb70);
              uVar3 = uStack_f0;
                    /* try { // try from 025ca290 to 026ca2eb has its CatchHandler @ 025ca1b0 */
              lVar9 = UnityEngine_Component__get_gameObject_3c187f4(param_3,0);
              if (lVar9 == 0) goto LAB_025ca364;
              uVar6 = UnityEngine_GameObject__get_layer_3c1cb44(lVar9,0);
              uVar11 = *(undefined8 *)(param_2 + 0x68);
              uVar7 = UnityEngine_Renderer__get_shadowCastingMode_3bdcc28(lVar10,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ca230 with catch @ 025ca2cc
                        */
              bVar4 = UnityEngine_Renderer__get_receiveShadows_3bdcda0(lVar10,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ca244 with catch @ 025ca2d0
                        */
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                FUN_021f0574(*(long *)puVar2);
              }
                    /* try { // try from 025ca2ec to 026ca2ef has its CatchHandler @ 025ca2f8 */
                    /* catch() { ... } // from try @ 025ca2ec with catch @ 025ca2f8 */
                    /* try { // try from 025ca2fc to 026ca303 has its CatchHandler @ 025ca30c */
                    /* try { // try from 025ca304 to 026ca30f has its CatchHandler @ 025ca1b0 */
              uStack_228 = uStack_a8;
              uStack_230 = uStack_b0;
              uStack_218 = uStack_98;
              uStack_220 = uStack_a0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ca2fc with catch @ 025ca30c
                        */
              uStack_208 = uStack_88;
              uStack_210 = uStack_90;
              uStack_1f8 = uStack_78;
              uStack_200 = uStack_80;
              UnityEngine_Graphics__DrawMesh_3bd96c8
                        (param_4,&uStack_230,uVar3,uVar6,uVar11,iVar5,0,uVar7,bVar4 & 1,0);
              iVar5 = iVar5 + 1;
              iVar8 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_4,0);
            } while (iVar5 < iVar8);
          }
        }
        return;
      }
    }
  }
LAB_025ca364:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

