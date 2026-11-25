/* IL2CPP: SandFlowRenderer$$RenderLiquid
void SandFlowRenderer__RenderLiquid (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$RenderLiquid
   void SandFlowRenderer__RenderLiquid (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera,
   const MethodInfo* method); */

void SandFlowRenderer__RenderLiquid_24be008(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 025be008 to 026be00f has its CatchHandler @ 025be018 */
  puVar2 = PTR_DAT_049b3b98;
                    /* try { // try from 025be010 to 026be01b has its CatchHandler @ 025bdf8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025be008 with catch @ 025be018
                        */
                    /* try { // try from 025be01c to 026be0a7 has its CatchHandler @ 025be01c
                       catch() { ... } // from try @ 025be01c with catch @ 025be01c
                       catch() { ... } // from try @ 025be140 with catch @ 025be01c
                       catch() { ... } // from try @ 025be1bc with catch @ 025be01c */
  if ((bRam0000000004f4bbba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcf68);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbba = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(param_2,uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025be0a8 to 026be0b3 has its CatchHandler @ 025be180 */
    uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Rendering_CommandBuffer__Clear_3c3d058(*(long *)(param_1 + 0x28),0);
        puVar2 = PTR_DAT_049c6e10;
        iVar1 = *(int *)(param_1 + 0x324);
        if (iVar1 < 0x21) {
          iVar1 = 0x20;
        }
        if (iVar1 * *(int *)(param_1 + 0x2f8) == 0) {
          return;
        }
                    /* try { // try from 025be0e0 to 026be0ef has its CatchHandler @ 025be17c */
        lVar7 = *(long *)(param_1 + 0x2d8);
        lVar5 = *(long *)PTR_DAT_049c6e10;
                    /* try { // try from 025be0f4 to 026be11b has its CatchHandler @ 025be184 */
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar2;
        }
        if (param_2 != 0) {
          uVar3 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x9c);
          UnityEngine_Camera__get_worldToCameraMatrix_3bce094(&uStack_80,param_2,0);
          if (lVar7 != 0) {
                    /* try { // try from 025be130 to 026be13f has its CatchHandler @ 025be188 */
            uStack_b8 = uStack_78;
            uStack_c0 = uStack_80;
            uStack_a8 = uStack_68;
            uStack_b0 = uStack_70;
            uStack_98 = uStack_58;
            uStack_a0 = uStack_60;
            uStack_88 = uStack_48;
            uStack_90 = uStack_50;
                    /* try { // try from 025be140 to 026be1a3 has its CatchHandler @ 025be01c */
            UnityEngine_MaterialPropertyBlock__SetMatrix_3bdbd70(lVar7,uVar3,&uStack_c0,0);
            lVar5 = *(long *)(param_1 + 0x2d8);
            uVar3 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
            UnityEngine_Camera__get_projectionMatrix_3bce244(&uStack_100,param_2,0);
            uStack_178 = uStack_f8;
            uStack_180 = uStack_100;
            uStack_168 = uStack_e8;
            uStack_170 = uStack_f0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025be0e0 with catch @ 025be17c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025be0a8 with catch @ 025be180
                        */
            uStack_158 = uStack_d8;
            uStack_160 = uStack_e0;
            uStack_148 = uStack_c8;
            uStack_150 = uStack_d0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025be0f4 with catch @ 025be184
                        */
            UnityEngine_GL__GetGPUProjectionMatrix_3bd9c78(&uStack_140,&uStack_180,1,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025be130 with catch @ 025be188
                        */
            if (lVar5 != 0) {
              uStack_1b8 = uStack_138;
              uStack_1c0 = uStack_140;
              uStack_1a8 = uStack_128;
              uStack_1b0 = uStack_130;
                    /* try { // try from 025be1a4 to 026be1a7 has its CatchHandler @ 025be1b0 */
              uStack_198 = uStack_118;
              uStack_1a0 = uStack_120;
              uStack_188 = uStack_108;
              uStack_190 = uStack_110;
              UnityEngine_MaterialPropertyBlock__SetMatrix_3bdbd70(lVar5,uVar3,&uStack_1c0,0);
                    /* catch() { ... } // from try @ 025be1a4 with catch @ 025be1b0 */
                    /* try { // try from 025be1b4 to 026be1bb has its CatchHandler @ 025be1c4 */
              if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 025be1bc to 026be1c7 has its CatchHandler @ 025be01c */
                UnityEngine_Rendering_CommandBuffer__Clear_3c3d058(*(long *)(param_1 + 0x20),0);
                lVar5 = *(long *)(param_1 + 0x48);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025be1b4 with catch @ 025be1c4
                        */
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a8();
                  }
                  if (*(long *)(param_1 + 0x20) != 0) {
                    uStack_1e8 = *(undefined8 *)(lVar5 + 0x28);
                    uStack_1f0 = *(undefined8 *)(lVar5 + 0x20);
                    uStack_1d8 = *(undefined8 *)(lVar5 + 0x38);
                    uStack_1e0 = *(undefined8 *)(lVar5 + 0x30);
                    uStack_1d0 = *(undefined8 *)(lVar5 + 0x40);
                    UnityEngine_Rendering_CommandBuffer__SetRenderTarget_3c3e140
                              (*(long *)(param_1 + 0x20),lVar5,&uStack_1f0,0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_3c3dd7c
                                (0,0,0,0,*(long *)(param_1 + 0x20),0,1,0);
                      lVar5 = *(long *)(param_1 + 0x20);
                      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
                      if (cRam0000000004f4a192 == '\0') {
                        FUN_021f03f8(PTR_DAT_049bc160);
                        cRam0000000004f4a192 = '\x01';
                      }
                      puVar2 = PTR_DAT_049bc160;
                      uVar8 = *(undefined8 *)(param_1 + 0x18);
                      lVar7 = *(long *)(*(long *)PTR_DAT_049bc160 + 0xb8);
                      uStack_228 = *(undefined8 *)(lVar7 + 0x48);
                      uStack_230 = *(undefined8 *)(lVar7 + 0x40);
                      uStack_218 = *(undefined8 *)(lVar7 + 0x58);
                      uStack_220 = *(undefined8 *)(lVar7 + 0x50);
                      uStack_208 = *(undefined8 *)(lVar7 + 0x68);
                      uStack_210 = *(undefined8 *)(lVar7 + 0x60);
                      uStack_1f8 = *(undefined8 *)(lVar7 + 0x78);
                      uStack_200 = *(undefined8 *)(lVar7 + 0x70);
                      uVar3 = SandFlowRenderer__PrepareChunks_24be418(param_1);
                      if (lVar5 != 0) {
                        uStack_268 = uStack_228;
                        uStack_270 = uStack_230;
                        uStack_258 = uStack_218;
                        uStack_260 = uStack_220;
                        uStack_248 = uStack_208;
                        uStack_250 = uStack_210;
                        uStack_238 = uStack_1f8;
                        uStack_240 = uStack_200;
                        UnityEngine_Rendering_CommandBuffer__DrawProcedural_3c3e9f4
                                  (lVar5,uVar6,&uStack_270,uVar8,0,0,0x1800,uVar3,
                                   *(undefined8 *)(param_1 + 0x2d8),0);
                        if (*(long *)(param_1 + 0x20) != 0) {
                          UnityEngine_Rendering_CommandBuffer__GenerateMips_3c3e7bc
                                    (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0);
                          lVar5 = *(long *)(param_1 + 0x20);
                          UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_3c3bd60
                                    (&uStack_298,*(undefined8 *)(param_1 + 0x40),0);
                          if (lVar5 != 0) {
                            uStack_2a0 = uStack_278;
                            uStack_2b8 = uStack_290;
                            uStack_2c0 = uStack_298;
                            uStack_2a8 = uStack_280;
                            uStack_2b0 = uStack_288;
                            UnityEngine_Rendering_CommandBuffer__SetRenderTarget_3c3dff8
                                      (lVar5,&uStack_2c0,2,0,0);
                            lVar5 = *(long *)(param_1 + 0x20);
                            if (cRam0000000004f4a192 == '\0') {
                              FUN_021f03f8(PTR_DAT_049bc160);
                              cRam0000000004f4a192 = '\x01';
                            }
                            if (lVar5 != 0) {
                              lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
                              uStack_2f8 = *(undefined8 *)(lVar7 + 0x48);
                              uStack_300 = *(undefined8 *)(lVar7 + 0x40);
                              uStack_2e8 = *(undefined8 *)(lVar7 + 0x58);
                              uStack_2f0 = *(undefined8 *)(lVar7 + 0x50);
                              uStack_2d8 = *(undefined8 *)(lVar7 + 0x68);
                              uStack_2e0 = *(undefined8 *)(lVar7 + 0x60);
                              uStack_2c8 = *(undefined8 *)(lVar7 + 0x78);
                              uStack_2d0 = *(undefined8 *)(lVar7 + 0x70);
                              UnityEngine_Rendering_CommandBuffer__DrawProcedural_3c3e8c0
                                        (lVar5,&uStack_300,*(undefined8 *)(param_1 + 0x18),2,0,3,1,
                                         *(undefined8 *)(param_1 + 0x2d8),0);
                              uVar6 = *(undefined8 *)(param_1 + 0x20);
                              if (*(int *)(*(long *)PTR_DAT_049bcf68 + 0xe4) == 0) {
                                FUN_021f0574();
                              }
                              UnityEngine_Graphics__ExecuteCommandBuffer_3bd8dec(uVar6,0);
                              lVar5 = *(long *)(param_1 + 0x28);
                              if (cRam0000000004f4a192 == '\0') {
                                FUN_021f03f8(PTR_DAT_049bc160);
                                cRam0000000004f4a192 = '\x01';
                              }
                              if (lVar5 != 0) {
                                lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
                                uStack_338 = *(undefined8 *)(lVar7 + 0x48);
                                uStack_340 = *(undefined8 *)(lVar7 + 0x40);
                                uStack_328 = *(undefined8 *)(lVar7 + 0x58);
                                uStack_330 = *(undefined8 *)(lVar7 + 0x50);
                                uStack_318 = *(undefined8 *)(lVar7 + 0x68);
                                uStack_320 = *(undefined8 *)(lVar7 + 0x60);
                                uStack_308 = *(undefined8 *)(lVar7 + 0x78);
                                uStack_310 = *(undefined8 *)(lVar7 + 0x70);
                                UnityEngine_Rendering_CommandBuffer__DrawProcedural_3c3e8c0
                                          (lVar5,&uStack_340,*(undefined8 *)(param_1 + 0x18),1,0,3,1
                                           ,*(undefined8 *)(param_1 + 0x2d8),0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

