/* IL2CPP: Conveyor$$IsOnBelt
bool Conveyor__IsOnBelt (Conveyor_o* __this, double percent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$IsOnBelt
   bool Conveyor__IsOnBelt (Conveyor_o* __this, double percent, const MethodInfo* method); */

bool Conveyor__IsOnBelt_24b03c4(undefined8 param_1,long param_2)

{
  double dVar1;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b03b4 with catch @ 025b03c4
                        */
                    /* try { // try from 025b03c8 to 026b044f has its CatchHandler @ 025b03c8
                       catch() { ... } // from try @ 025b03c8 with catch @ 025b03c8
                       catch() { ... } // from try @ 025b04ac with catch @ 025b03c8
                       catch() { ... } // from try @ 025b0528 with catch @ 025b03c8 */
  dVar1 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  return dVar1 <= *(double *)(param_2 + 0x168);
}

