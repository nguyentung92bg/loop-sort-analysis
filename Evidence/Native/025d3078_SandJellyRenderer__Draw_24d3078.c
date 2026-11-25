/* IL2CPP: SandJellyRenderer$$Draw
void SandJellyRenderer__Draw (SandJellyRenderer_o* __this, UnityEngine_Matrix4x4_o matrix, UnityEngine_Vector3_o min, UnityEngine_Vector3_o max, float start, float front, float groupLength, UnityEngine_Vector4_array* colors, int32_t groups, float wobble, UnityEngine_Vector4_o neck, int32_t layer, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandJellyRenderer$$Draw
   void SandJellyRenderer__Draw (SandJellyRenderer_o* __this, UnityEngine_Matrix4x4_o matrix,
   UnityEngine_Vector3_o min, UnityEngine_Vector3_o max, float start, float front, float
   groupLength, UnityEngine_Vector4_array* colors, int32_t groups, float wobble,
   UnityEngine_Vector4_o neck, int32_t layer, UnityEngine_Camera_o* camera, const MethodInfo*
   method); */

void SandJellyRenderer__Draw_24d3078
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,int param_12,
               undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
               float param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  
  puVar5 = PTR_DAT_049c7138;
  if ((bRam0000000004f4bc23 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcf68);
    FUN_021f03f8(PTR_DAT_049c7138);
    bRam0000000004f4bc23 = 1;
  }
  lVar7 = *(long *)(param_9 + 0x20);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar7 != 0) {
                    /* try { // try from 025d3144 to 026d315f has its CatchHandler @ 025d31b8 */
    UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
              (param_1,param_2,param_3,0,lVar7,**(undefined4 **)(*(long *)puVar5 + 0xb8),0);
    if (*(long *)(param_9 + 0x20) != 0) {
                    /* try { // try from 025d3160 to 026d31d3 has its CatchHandler @ 025d3068 */
      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                (param_4,param_5,param_6,0,*(long *)(param_9 + 0x20),
                 *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4),0);
      if (*(long *)(param_9 + 0x20) != 0) {
        if (0xf < param_12) {
          param_12 = 0x10;
        }
        if (param_12 < 2) {
          param_12 = 1;
        }
        fVar3 = _UNK_013aa8d8;
        if (_UNK_013aa8d8 <= param_17) {
          fVar3 = param_17;
        }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d3144 with catch @ 025d31b8
                        */
        UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                  (param_7,param_8,fVar3,(float)param_12,*(long *)(param_9 + 0x20),
                   *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
        if (*(long *)(param_9 + 0x20) != 0) {
                    /* try { // try from 025d31d4 to 026d31d7 has its CatchHandler @ 025d31e0 */
                    /* catch() { ... } // from try @ 025d31d4 with catch @ 025d31e0 */
                    /* try { // try from 025d31e4 to 026d31eb has its CatchHandler @ 025d31f4 */
          UnityEngine_MaterialPropertyBlock__SetVectorArray_3bdbdb8
                    (*(long *)(param_9 + 0x20),
                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),param_11,0);
                    /* try { // try from 025d31ec to 026d31f7 has its CatchHandler @ 025d3068 */
          if (*(long *)(param_9 + 0x20) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d31e4 with catch @ 025d31f4
                        */
                    /* try { // try from 025d31f8 to 026d32a7 has its CatchHandler @ 025d31f8
                       catch() { ... } // from try @ 025d31f8 with catch @ 025d31f8
                       catch() { ... } // from try @ 025d32c4 with catch @ 025d31f8
                       catch() { ... } // from try @ 025d33f8 with catch @ 025d31f8 */
            UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
                      (param_18,*(long *)(param_9 + 0x20),
                       *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
            puVar4 = PTR_DAT_049bcf68;
            if (*(long *)(param_9 + 0x20) != 0) {
              UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                        ((undefined4)param_19,param_19._4_4_,(undefined4)param_20,param_20._4_4_,
                         *(long *)(param_9 + 0x20),
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14),0);
              uStack_c8 = param_10[1];
              uStack_d0 = *param_10;
              uStack_b8 = param_10[3];
              uStack_c0 = param_10[2];
              uVar1 = *(undefined8 *)(param_9 + 0x10);
              uVar2 = *(undefined8 *)(param_9 + 0x18);
              uStack_a8 = param_10[5];
              uStack_b0 = param_10[4];
              uStack_98 = param_10[7];
              uStack_a0 = param_10[6];
              uVar6 = *(undefined8 *)(param_9 + 0x20);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uStack_108 = uStack_c8;
              uStack_110 = uStack_d0;
              uStack_f8 = uStack_b8;
              uStack_100 = uStack_c0;
              uStack_e8 = uStack_a8;
              uStack_f0 = uStack_b0;
              uStack_d8 = uStack_98;
              uStack_e0 = uStack_a0;
              UnityEngine_Graphics__DrawMesh_3bd96c8
                        (uVar2,&uStack_110,uVar1,param_13,param_14,0,uVar6,0,0,0);
                    /* try { // try from 025d32a8 to 026d32c3 has its CatchHandler @ 025d33c4 */
                    /* try { // try from 025d32c4 to 026d33df has its CatchHandler @ 025d31f8 */
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

