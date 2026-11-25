/* IL2CPP: ResourcesFileSystem.<GetFiles>d__0$$MoveNext
bool ResourcesFileSystem__GetFiles_d__0__MoveNext (ResourcesFileSystem__GetFiles_d__0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ResourcesFileSystem.<GetFiles>d__0$$MoveNext
   bool ResourcesFileSystem__GetFiles_d__0__MoveNext (ResourcesFileSystem__GetFiles_d__0_o* __this,
   const MethodInfo* method); */

undefined8 ResourcesFileSystem__GetFiles_d__0__MoveNext_25651c8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 02665074 with catch @ 026651c8 */
                    /* catch() { ... } // from try @ 02665068 with catch @ 026651cc */
                    /* catch() { ... } // from try @ 02665058 with catch @ 026651d0 */
                    /* catch() { ... } // from try @ 0266503c with catch @ 026651d4 */
                    /* catch() { ... } // from try @ 02665020 with catch @ 026651d8 */
                    /* catch() { ... } // from try @ 02665018 with catch @ 026651dc */
  if ((bRam0000000004f4c151 & 1) == 0) {
                    /* catch() { ... } // from try @ 02665008 with catch @ 026651e0 */
                    /* catch() { ... } // from try @ 02664ffc with catch @ 026651e4 */
                    /* catch() { ... } // from try @ 02664ff0 with catch @ 026651e8 */
    FUN_021f03f8(PTR_DAT_049bbb40);
                    /* catch() { ... } // from try @ 02664fd4 with catch @ 026651ec */
                    /* catch() { ... } // from try @ 02664fc4 with catch @ 026651f0 */
    bRam0000000004f4c151 = 1;
  }
                    /* catch() { ... } // from try @ 02664fb8 with catch @ 026651f4 */
                    /* catch() { ... } // from try @ 02664fac with catch @ 026651f8 */
                    /* catch() { ... } // from try @ 02664f90 with catch @ 026651fc */
  if (*(int *)(param_1 + 0x10) == 1) {
                    /* catch() { ... } // from try @ 02664e98 with catch @ 02665238 */
                    /* catch() { ... } // from try @ 02664e8c with catch @ 0266523c */
                    /* catch() { ... } // from try @ 02664e70 with catch @ 02665240 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 02664e60 with catch @ 02665244 */
    uVar3 = *(int *)(param_1 + 0x40) + 1;
                    /* catch() { ... } // from try @ 02664e54 with catch @ 02665248 */
    *(uint *)(param_1 + 0x40) = uVar3;
  }
  else {
                    /* catch() { ... } // from try @ 02664f80 with catch @ 02665200 */
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
                    /* catch() { ... } // from try @ 02664f74 with catch @ 02665204 */
                    /* catch() { ... } // from try @ 02664f68 with catch @ 02665208 */
                    /* catch() { ... } // from try @ 02664f4c with catch @ 0266520c */
                    /* catch() { ... } // from try @ 02664f34 with catch @ 02665210 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 02664f28 with catch @ 02665214 */
    uVar1 = UnityEngine_Resources__LoadAll_3c12e78(*(undefined8 *)(param_1 + 0x28),0);
                    /* catch() { ... } // from try @ 02664f1c with catch @ 02665218 */
                    /* catch() { ... } // from try @ 02664f04 with catch @ 0266521c */
                    /* catch() { ... } // from try @ 02664ef8 with catch @ 02665220 */
    *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* catch() { ... } // from try @ 02664eec with catch @ 02665224 */
                    /* catch() { ... } // from try @ 02664ed4 with catch @ 02665228 */
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar1);
                    /* catch() { ... } // from try @ 02664ec8 with catch @ 0266522c */
    uVar3 = 0;
                    /* catch() { ... } // from try @ 02664ebc with catch @ 02665230 */
    *(undefined4 *)(param_1 + 0x40) = 0;
                    /* catch() { ... } // from try @ 02664ea4 with catch @ 02665234 */
  }
                    /* catch() { ... } // from try @ 02664e44 with catch @ 0266524c */
                    /* catch() { ... } // from try @ 02664e28 with catch @ 02665250 */
  plVar2 = (long *)(param_1 + 0x38);
  lVar4 = *plVar2;
                    /* catch() { ... } // from try @ 02664e14 with catch @ 02665254 */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 02664e08 with catch @ 02665258 */
                    /* catch() { ... } // from try @ 02664df0 with catch @ 0266525c */
                    /* catch() { ... } // from try @ 02664de4 with catch @ 02665260 */
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
                    /* catch() { ... } // from try @ 02665198 with catch @ 026652cc */
      *plVar2 = 0;
      thunk_FUN_021f190c(plVar2,0);
                    /* try { // try from 026652e4 to 027652fb has its CatchHandler @ 02665378 */
      return 0;
    }
                    /* catch() { ... } // from try @ 02664dd8 with catch @ 02665264 */
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
                    /* catch() { ... } // from try @ 02664dc0 with catch @ 02665268 */
                    /* catch() { ... } // from try @ 02664db4 with catch @ 0266526c */
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
                    /* catch() { ... } // from try @ 02664da8 with catch @ 02665270 */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 02664d8c with catch @ 02665274 */
      uVar5 = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 02664d74 with catch @ 02665278 */
                    /* catch() { ... } // from try @ 02664d68 with catch @ 0266527c */
      uVar1 = UnityEngine_Object__get_name_3c232a8(lVar4,0);
                    /* catch() { ... } // from try @ 02664d58 with catch @ 02665280 */
                    /* catch() { ... } // from try @ 02664d40 with catch @ 02665284 */
                    /* catch() { ... } // from try @ 02664d30 with catch @ 02665288 */
                    /* catch() { ... } // from try @ 02664d18 with catch @ 0266528c */
                    /* catch() { ... } // from try @ 02664d08 with catch @ 02665290 */
                    /* catch() { ... } // from try @ 02664cf0 with catch @ 02665294 */
      if (*(int *)(*(long *)PTR_DAT_049bbb40 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02664ce0 with catch @ 02665298 */
                    /* catch() { ... } // from try @ 02664cc8 with catch @ 0266529c */
        FUN_021f0574(*(long *)PTR_DAT_049bbb40);
      }
                    /* catch() { ... } // from try @ 02664cb8 with catch @ 026652a0 */
                    /* catch() { ... } // from try @ 02664ca0 with catch @ 026652a4 */
                    /* catch() { ... } // from try @ 02664c94 with catch @ 026652a8 */
                    /* catch() { ... } // from try @ 02664c7c with catch @ 026652ac */
      uVar1 = System_IO_Path__Combine_30d2b84(uVar5,uVar1,0);
                    /* catch() { ... } // from try @ 02664c70 with catch @ 026652b0 */
                    /* catch() { ... } // from try @ 02664c64 with catch @ 026652b4 */
      *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* catch() { ... } // from try @ 02664c4c with catch @ 026652b8 */
                    /* catch() { ... } // from try @ 02664c40 with catch @ 026652bc */
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar1);
                    /* catch() { ... } // from try @ 02664c34 with catch @ 026652c0 */
                    /* catch() { ... } // from try @ 02664c1c with catch @ 026652c4 */
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
                    /* catch() { ... } // from try @ 02664c04 with catch @ 026652c8 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

