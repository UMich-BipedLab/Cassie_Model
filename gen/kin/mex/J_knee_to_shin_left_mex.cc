/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:32:12 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t2280;
  double t2289;
  double t2290;
  double t2278;
  double t2291;
  double t2249;
  double t2288;
  double t2293;
  double t2309;
  double t2314;
  double t2315;
  double t2318;
  double t2319;
  double t2334;
  double t2344;
  double t2348;
  double t2353;
  double t2328;
  double t2331;
  double t2332;
  double t2360;
  double t2383;
  double t2386;
  double t2387;
  double t2396;
  double t2379;
  double t2381;
  double t2382;
  double t2408;
  double t2410;
  double t2412;
  double t2421;
  double t2423;
  double t2424;
  double t2426;
  double t2429;
  double t2430;
  double t2431;
  double t2438;
  double t2439;
  double t2441;
  double t2443;
  double t2445;
  double t2447;
  double t2450;
  double t2455;
  double t2458;
  double t2459;
  double t2469;
  double t2470;
  double t2472;
  double t2251;
  double t2262;
  double t2275;
  double t2277;
  double t2325;
  double t2326;
  double t2485;
  double t2486;
  double t2487;
  double t2489;
  double t2490;
  double t2491;
  double t2351;
  double t2354;
  double t2357;
  double t2364;
  double t2365;
  double t2370;
  double t2493;
  double t2494;
  double t2495;
  double t2393;
  double t2398;
  double t2403;
  double t2414;
  double t2415;
  double t2419;
  double t2425;
  double t2427;
  double t2428;
  double t2505;
  double t2506;
  double t2507;
  double t2510;
  double t2511;
  double t2513;
  double t2434;
  double t2436;
  double t2437;
  double t2448;
  double t2451;
  double t2453;
  double t2516;
  double t2518;
  double t2519;
  double t2522;
  double t2523;
  double t2524;
  double t2463;
  double t2465;
  double t2467;
  double t2526;
  double t2527;
  double t2528;
  double t2530;
  double t2531;
  double t2532;
  double t2545;
  double t2546;
  double t2547;
  double t2554;
  double t2555;
  double t2556;
  double t2558;
  double t2559;
  double t2560;
  double t2562;
  double t2563;
  double t2564;
  double t2566;
  double t2567;
  double t2568;
  double t2570;
  double t2571;
  double t2572;
  double t2574;
  double t2575;
  double t2576;
  double t2589;
  double t2590;
  double t2591;
  double t2598;
  double t2599;
  double t2600;
  double t2602;
  double t2603;
  double t2604;
  double t2606;
  double t2607;
  double t2608;
  double t2610;
  double t2611;
  double t2612;
  double t2614;
  double t2615;
  double t2616;
  double t2618;
  double t2619;
  double t2620;
  double t2633;
  double t2634;
  double t2635;
  double t2642;
  double t2643;
  double t2644;
  double t2646;
  double t2647;
  double t2648;
  double t2650;
  double t2651;
  double t2652;
  double t2654;
  double t2655;
  double t2656;
  double t2658;
  double t2659;
  double t2660;
  double t2662;
  double t2663;
  double t2664;
  double t2676;
  double t2677;
  double t2678;
  double t2680;
  double t2681;
  double t2685;
  double t2686;
  double t2687;
  double t2689;
  double t2690;
  double t2691;
  double t2693;
  double t2694;
  double t2695;
  double t2697;
  double t2698;
  double t2699;
  double t2701;
  double t2702;
  double t2703;
  double t2714;
  double t2715;
  double t2716;
  double t2719;
  double t2720;
  double t2721;
  double t2725;
  double t2726;
  double t2728;
  double t2729;
  double t2730;
  double t2732;
  double t2733;
  double t2734;
  double t2736;
  double t2737;
  double t2738;
  double t2740;
  double t2741;
  double t2742;
  double t2755;
  double t2756;
  double t2757;
  double t2761;
  double t2762;
  double t2763;
  double t2765;
  double t2766;
  double t2767;
  double t2769;
  double t2770;
  double t2771;
  double t2773;
  double t2774;
  double t2775;
  double t2777;
  double t2778;
  double t2779;
  double t2795;
  double t2796;
  double t2798;
  double t2799;
  double t2800;
  double t2802;
  double t2803;
  double t2804;
  double t2806;
  double t2807;
  double t2808;
  double t2810;
  double t2811;
  double t2812;
  double t2824;
  double t2825;
  double t2826;
  double t2828;
  double t2829;
  double t2833;
  double t2834;
  double t2836;
  double t2837;
  double t2838;
  double t2840;
  double t2841;
  double t2842;
  double t2844;
  double t2845;
  double t2846;
  double t2848;
  double t2849;
  double t2850;
  double t2758;
  double t2759;
  double t2760;
  double t2764;
  double t2768;
  double t2772;
  double t2776;
  double t2780;
  double t2781;
  double t2782;
  double t2783;
  double t2784;
  double t2785;
  double t2786;
  double t2787;
  double t2788;
  double t2498;
  double t2500;
  double t2502;
  double t2878;
  double t2879;
  double t2880;
  double t2882;
  double t2883;
  double t2884;
  double t2864;
  double t2865;
  double t2866;
  double t2868;
  double t2869;
  double t2896;
  double t2897;
  double t2898;
  double t2900;
  double t2901;
  double t2902;
  double t2909;
  double t2910;
  double t2911;
  double t2913;
  double t2914;
  double t2915;
  double t2927;
  double t2928;
  double t2929;
  double t2931;
  double t2932;
  double t2933;
  double t2941;
  double t2942;
  double t2943;
  double t2945;
  double t2946;
  double t2947;
  double t2965;
  double t2966;
  double t2967;
  double t2970;
  double t2971;
  double t2973;
  double t2974;
  double t2975;
  double t2958;
  double t2959;
  double t2961;
  double t2962;
  double t2963;
  double t2987;
  double t2988;
  double t2989;
  double t2991;
  double t2992;
  double t2993;
  double t2995;
  double t2996;
  double t2997;
  double t2999;
  double t3000;
  double t3001;
  double t3003;
  double t3004;
  double t3005;
  double t3017;
  double t3018;
  double t3019;
  double t3021;
  double t3022;
  double t3023;
  double t3025;
  double t3026;
  double t3027;
  double t3029;
  double t3030;
  double t3031;
  double t3033;
  double t3034;
  double t3035;
  double t3054;
  double t3055;
  double t2538;
  double t3046;
  double t3047;
  double t3048;
  double t3050;
  double t3051;
  double t3065;
  double t3066;
  double t3067;
  double t3070;
  double t3071;
  double t3073;
  double t3074;
  double t3085;
  double t3086;
  double t3087;
  double t3090;
  double t3091;
  double t3093;
  double t3094;
  double t3057;
  double t2539;
  double t2540;
  double t3105;
  double t3106;
  double t3108;
  double t3109;
  double t3110;
  double t3076;
  double t3118;
  double t3119;
  double t3120;
  double t3080;
  double t3096;
  double t3130;
  double t3131;
  double t3132;
  double t3100;
  t2280 = Cos(var1[5]);
  t2289 = Sin(var1[3]);
  t2290 = Sin(var1[4]);
  t2278 = Cos(var1[3]);
  t2291 = Sin(var1[5]);
  t2249 = Cos(var1[6]);
  t2288 = -1.*t2278*t2280;
  t2293 = -1.*t2289*t2290*t2291;
  t2309 = t2288 + t2293;
  t2314 = -1.*t2280*t2289*t2290;
  t2315 = t2278*t2291;
  t2318 = t2314 + t2315;
  t2319 = Sin(var1[6]);
  t2334 = Cos(var1[7]);
  t2344 = -1.*t2334;
  t2348 = 1. + t2344;
  t2353 = Sin(var1[7]);
  t2328 = t2249*t2309;
  t2331 = t2318*t2319;
  t2332 = t2328 + t2331;
  t2360 = Cos(var1[4]);
  t2383 = Cos(var1[8]);
  t2386 = -1.*t2383;
  t2387 = 1. + t2386;
  t2396 = Sin(var1[8]);
  t2379 = -1.*t2360*t2334*t2289;
  t2381 = t2332*t2353;
  t2382 = t2379 + t2381;
  t2408 = t2249*t2318;
  t2410 = -1.*t2309*t2319;
  t2412 = t2408 + t2410;
  t2421 = Cos(var1[9]);
  t2423 = -1.*t2421;
  t2424 = 1. + t2423;
  t2426 = Sin(var1[9]);
  t2429 = t2383*t2382;
  t2430 = t2412*t2396;
  t2431 = t2429 + t2430;
  t2438 = t2383*t2412;
  t2439 = -1.*t2382*t2396;
  t2441 = t2438 + t2439;
  t2443 = Cos(var1[10]);
  t2445 = -1.*t2443;
  t2447 = 1. + t2445;
  t2450 = Sin(var1[10]);
  t2455 = -1.*t2426*t2431;
  t2458 = t2421*t2441;
  t2459 = t2455 + t2458;
  t2469 = t2421*t2431;
  t2470 = t2426*t2441;
  t2472 = t2469 + t2470;
  t2251 = -1.*t2249;
  t2262 = 1. + t2251;
  t2275 = 0.135*t2262;
  t2277 = 0. + t2275;
  t2325 = -0.135*t2319;
  t2326 = 0. + t2325;
  t2485 = -1.*t2280*t2289;
  t2486 = t2278*t2290*t2291;
  t2487 = t2485 + t2486;
  t2489 = t2278*t2280*t2290;
  t2490 = t2289*t2291;
  t2491 = t2489 + t2490;
  t2351 = 0.135*t2348;
  t2354 = 0.049*t2353;
  t2357 = 0. + t2351 + t2354;
  t2364 = -0.049*t2348;
  t2365 = 0.135*t2353;
  t2370 = 0. + t2364 + t2365;
  t2493 = t2249*t2487;
  t2494 = t2491*t2319;
  t2495 = t2493 + t2494;
  t2393 = -0.049*t2387;
  t2398 = -0.09*t2396;
  t2403 = 0. + t2393 + t2398;
  t2414 = -0.09*t2387;
  t2415 = 0.049*t2396;
  t2419 = 0. + t2414 + t2415;
  t2425 = -0.049*t2424;
  t2427 = -0.21*t2426;
  t2428 = 0. + t2425 + t2427;
  t2505 = t2278*t2360*t2334;
  t2506 = t2495*t2353;
  t2507 = t2505 + t2506;
  t2510 = t2249*t2491;
  t2511 = -1.*t2487*t2319;
  t2513 = t2510 + t2511;
  t2434 = -0.21*t2424;
  t2436 = 0.049*t2426;
  t2437 = 0. + t2434 + t2436;
  t2448 = -0.2707*t2447;
  t2451 = 0.0016*t2450;
  t2453 = 0. + t2448 + t2451;
  t2516 = t2383*t2507;
  t2518 = t2513*t2396;
  t2519 = t2516 + t2518;
  t2522 = t2383*t2513;
  t2523 = -1.*t2507*t2396;
  t2524 = t2522 + t2523;
  t2463 = -0.0016*t2447;
  t2465 = -0.2707*t2450;
  t2467 = 0. + t2463 + t2465;
  t2526 = -1.*t2426*t2519;
  t2527 = t2421*t2524;
  t2528 = t2526 + t2527;
  t2530 = t2421*t2519;
  t2531 = t2426*t2524;
  t2532 = t2530 + t2531;
  t2545 = t2278*t2360*t2249*t2291;
  t2546 = t2278*t2360*t2280*t2319;
  t2547 = t2545 + t2546;
  t2554 = -1.*t2278*t2334*t2290;
  t2555 = t2547*t2353;
  t2556 = t2554 + t2555;
  t2558 = t2278*t2360*t2280*t2249;
  t2559 = -1.*t2278*t2360*t2291*t2319;
  t2560 = t2558 + t2559;
  t2562 = t2383*t2556;
  t2563 = t2560*t2396;
  t2564 = t2562 + t2563;
  t2566 = t2383*t2560;
  t2567 = -1.*t2556*t2396;
  t2568 = t2566 + t2567;
  t2570 = -1.*t2426*t2564;
  t2571 = t2421*t2568;
  t2572 = t2570 + t2571;
  t2574 = t2421*t2564;
  t2575 = t2426*t2568;
  t2576 = t2574 + t2575;
  t2589 = t2360*t2249*t2289*t2291;
  t2590 = t2360*t2280*t2289*t2319;
  t2591 = t2589 + t2590;
  t2598 = -1.*t2334*t2289*t2290;
  t2599 = t2591*t2353;
  t2600 = t2598 + t2599;
  t2602 = t2360*t2280*t2249*t2289;
  t2603 = -1.*t2360*t2289*t2291*t2319;
  t2604 = t2602 + t2603;
  t2606 = t2383*t2600;
  t2607 = t2604*t2396;
  t2608 = t2606 + t2607;
  t2610 = t2383*t2604;
  t2611 = -1.*t2600*t2396;
  t2612 = t2610 + t2611;
  t2614 = -1.*t2426*t2608;
  t2615 = t2421*t2612;
  t2616 = t2614 + t2615;
  t2618 = t2421*t2608;
  t2619 = t2426*t2612;
  t2620 = t2618 + t2619;
  t2633 = -1.*t2249*t2290*t2291;
  t2634 = -1.*t2280*t2290*t2319;
  t2635 = t2633 + t2634;
  t2642 = -1.*t2360*t2334;
  t2643 = t2635*t2353;
  t2644 = t2642 + t2643;
  t2646 = -1.*t2280*t2249*t2290;
  t2647 = t2290*t2291*t2319;
  t2648 = t2646 + t2647;
  t2650 = t2383*t2644;
  t2651 = t2648*t2396;
  t2652 = t2650 + t2651;
  t2654 = t2383*t2648;
  t2655 = -1.*t2644*t2396;
  t2656 = t2654 + t2655;
  t2658 = -1.*t2426*t2652;
  t2659 = t2421*t2656;
  t2660 = t2658 + t2659;
  t2662 = t2421*t2652;
  t2663 = t2426*t2656;
  t2664 = t2662 + t2663;
  t2676 = t2280*t2289;
  t2677 = -1.*t2278*t2290*t2291;
  t2678 = t2676 + t2677;
  t2680 = t2678*t2319;
  t2681 = t2510 + t2680;
  t2685 = t2249*t2678;
  t2686 = -1.*t2491*t2319;
  t2687 = t2685 + t2686;
  t2689 = t2383*t2681*t2353;
  t2690 = t2687*t2396;
  t2691 = t2689 + t2690;
  t2693 = t2383*t2687;
  t2694 = -1.*t2681*t2353*t2396;
  t2695 = t2693 + t2694;
  t2697 = -1.*t2426*t2691;
  t2698 = t2421*t2695;
  t2699 = t2697 + t2698;
  t2701 = t2421*t2691;
  t2702 = t2426*t2695;
  t2703 = t2701 + t2702;
  t2714 = t2280*t2289*t2290;
  t2715 = -1.*t2278*t2291;
  t2716 = t2714 + t2715;
  t2719 = t2249*t2716;
  t2720 = t2309*t2319;
  t2721 = t2719 + t2720;
  t2725 = -1.*t2716*t2319;
  t2726 = t2328 + t2725;
  t2728 = t2383*t2721*t2353;
  t2729 = t2726*t2396;
  t2730 = t2728 + t2729;
  t2732 = t2383*t2726;
  t2733 = -1.*t2721*t2353*t2396;
  t2734 = t2732 + t2733;
  t2736 = -1.*t2426*t2730;
  t2737 = t2421*t2734;
  t2738 = t2736 + t2737;
  t2740 = t2421*t2730;
  t2741 = t2426*t2734;
  t2742 = t2740 + t2741;
  t2755 = t2360*t2280*t2249;
  t2756 = -1.*t2360*t2291*t2319;
  t2757 = t2755 + t2756;
  t2761 = -1.*t2360*t2249*t2291;
  t2762 = -1.*t2360*t2280*t2319;
  t2763 = t2761 + t2762;
  t2765 = t2383*t2757*t2353;
  t2766 = t2763*t2396;
  t2767 = t2765 + t2766;
  t2769 = t2383*t2763;
  t2770 = -1.*t2757*t2353*t2396;
  t2771 = t2769 + t2770;
  t2773 = -1.*t2426*t2767;
  t2774 = t2421*t2771;
  t2775 = t2773 + t2774;
  t2777 = t2421*t2767;
  t2778 = t2426*t2771;
  t2779 = t2777 + t2778;
  t2795 = -1.*t2249*t2487;
  t2796 = t2795 + t2686;
  t2798 = t2383*t2513*t2353;
  t2799 = t2796*t2396;
  t2800 = t2798 + t2799;
  t2802 = t2383*t2796;
  t2803 = -1.*t2513*t2353*t2396;
  t2804 = t2802 + t2803;
  t2806 = -1.*t2426*t2800;
  t2807 = t2421*t2804;
  t2808 = t2806 + t2807;
  t2810 = t2421*t2800;
  t2811 = t2426*t2804;
  t2812 = t2810 + t2811;
  t2824 = t2278*t2280;
  t2825 = t2289*t2290*t2291;
  t2826 = t2824 + t2825;
  t2828 = -1.*t2826*t2319;
  t2829 = t2719 + t2828;
  t2833 = -1.*t2249*t2826;
  t2834 = t2833 + t2725;
  t2836 = t2383*t2829*t2353;
  t2837 = t2834*t2396;
  t2838 = t2836 + t2837;
  t2840 = t2383*t2834;
  t2841 = -1.*t2829*t2353*t2396;
  t2842 = t2840 + t2841;
  t2844 = -1.*t2426*t2838;
  t2845 = t2421*t2842;
  t2846 = t2844 + t2845;
  t2848 = t2421*t2838;
  t2849 = t2426*t2842;
  t2850 = t2848 + t2849;
  t2758 = 0.1305*t2334*t2757;
  t2759 = t2757*t2357;
  t2760 = t2757*t2353*t2403;
  t2764 = t2763*t2419;
  t2768 = t2428*t2767;
  t2772 = t2437*t2771;
  t2776 = t2453*t2775;
  t2780 = t2467*t2779;
  t2781 = t2450*t2775;
  t2782 = t2443*t2779;
  t2783 = t2781 + t2782;
  t2784 = -0.0016*t2783;
  t2785 = t2443*t2775;
  t2786 = -1.*t2450*t2779;
  t2787 = t2785 + t2786;
  t2788 = -0.2707*t2787;
  t2498 = t2334*t2495;
  t2500 = -1.*t2278*t2360*t2353;
  t2502 = t2498 + t2500;
  t2878 = -1.*t2383*t2426*t2502;
  t2879 = -1.*t2421*t2502*t2396;
  t2880 = t2878 + t2879;
  t2882 = t2421*t2383*t2502;
  t2883 = -1.*t2426*t2502*t2396;
  t2884 = t2882 + t2883;
  t2864 = 0.135*t2334;
  t2865 = -0.049*t2353;
  t2866 = t2864 + t2865;
  t2868 = 0.049*t2334;
  t2869 = t2868 + t2365;
  t2896 = t2249*t2826;
  t2897 = t2716*t2319;
  t2898 = t2896 + t2897;
  t2900 = t2334*t2898;
  t2901 = -1.*t2360*t2289*t2353;
  t2902 = t2900 + t2901;
  t2909 = -1.*t2383*t2426*t2902;
  t2910 = -1.*t2421*t2902*t2396;
  t2911 = t2909 + t2910;
  t2913 = t2421*t2383*t2902;
  t2914 = -1.*t2426*t2902*t2396;
  t2915 = t2913 + t2914;
  t2927 = t2360*t2249*t2291;
  t2928 = t2360*t2280*t2319;
  t2929 = t2927 + t2928;
  t2931 = t2334*t2929;
  t2932 = t2290*t2353;
  t2933 = t2931 + t2932;
  t2941 = -1.*t2383*t2426*t2933;
  t2942 = -1.*t2421*t2933*t2396;
  t2943 = t2941 + t2942;
  t2945 = t2421*t2383*t2933;
  t2946 = -1.*t2426*t2933*t2396;
  t2947 = t2945 + t2946;
  t2965 = -1.*t2383*t2507;
  t2966 = -1.*t2513*t2396;
  t2967 = t2965 + t2966;
  t2970 = t2426*t2967;
  t2971 = t2970 + t2527;
  t2973 = t2421*t2967;
  t2974 = -1.*t2426*t2524;
  t2975 = t2973 + t2974;
  t2958 = 0.049*t2383;
  t2959 = t2958 + t2398;
  t2961 = -0.09*t2383;
  t2962 = -0.049*t2396;
  t2963 = t2961 + t2962;
  t2987 = t2360*t2334*t2289;
  t2988 = t2898*t2353;
  t2989 = t2987 + t2988;
  t2991 = -1.*t2383*t2989;
  t2992 = -1.*t2829*t2396;
  t2993 = t2991 + t2992;
  t2995 = t2383*t2829;
  t2996 = -1.*t2989*t2396;
  t2997 = t2995 + t2996;
  t2999 = t2426*t2993;
  t3000 = t2421*t2997;
  t3001 = t2999 + t3000;
  t3003 = t2421*t2993;
  t3004 = -1.*t2426*t2997;
  t3005 = t3003 + t3004;
  t3017 = -1.*t2334*t2290;
  t3018 = t2929*t2353;
  t3019 = t3017 + t3018;
  t3021 = -1.*t2383*t3019;
  t3022 = -1.*t2757*t2396;
  t3023 = t3021 + t3022;
  t3025 = t2383*t2757;
  t3026 = -1.*t3019*t2396;
  t3027 = t3025 + t3026;
  t3029 = t2426*t3023;
  t3030 = t2421*t3027;
  t3031 = t3029 + t3030;
  t3033 = t2421*t3023;
  t3034 = -1.*t2426*t3027;
  t3035 = t3033 + t3034;
  t3054 = -1.*t2421*t2519;
  t3055 = t3054 + t2974;
  t2538 = t2443*t2528;
  t3046 = -0.21*t2421;
  t3047 = -0.049*t2426;
  t3048 = t3046 + t3047;
  t3050 = 0.049*t2421;
  t3051 = t3050 + t2427;
  t3065 = t2383*t2989;
  t3066 = t2829*t2396;
  t3067 = t3065 + t3066;
  t3070 = -1.*t2426*t3067;
  t3071 = t3070 + t3000;
  t3073 = -1.*t2421*t3067;
  t3074 = t3073 + t3004;
  t3085 = t2383*t3019;
  t3086 = t2757*t2396;
  t3087 = t3085 + t3086;
  t3090 = -1.*t2426*t3087;
  t3091 = t3090 + t3030;
  t3093 = -1.*t2421*t3087;
  t3094 = t3093 + t3034;
  t3057 = -1.*t2450*t2528;
  t2539 = -1.*t2450*t2532;
  t2540 = t2538 + t2539;
  t3105 = 0.0016*t2443;
  t3106 = t3105 + t2465;
  t3108 = -0.2707*t2443;
  t3109 = -0.0016*t2450;
  t3110 = t3108 + t3109;
  t3076 = -1.*t2450*t3071;
  t3118 = t2421*t3067;
  t3119 = t2426*t2997;
  t3120 = t3118 + t3119;
  t3080 = t2443*t3071;
  t3096 = -1.*t2450*t3091;
  t3130 = t2421*t3087;
  t3131 = t2426*t3027;
  t3132 = t3130 + t3131;
  t3100 = t2443*t3091;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2277*t2309 + t2318*t2326 + t2332*t2357 + 0.1305*(t2332*t2334 + t2289*t2353*t2360) - 1.*t2289*t2360*t2370 + t2382*t2403 + t2412*t2419 + t2428*t2431 + t2437*t2441 + t2453*t2459 + t2467*t2472 - 0.0016*(t2450*t2459 + t2443*t2472) - 0.2707*(t2443*t2459 - 1.*t2450*t2472);
  p_output1[10]=t2278*t2360*t2370 + t2277*t2487 + t2326*t2491 + t2357*t2495 + 0.1305*t2502 + t2403*t2507 + t2419*t2513 + t2428*t2519 + t2437*t2524 + t2453*t2528 + t2467*t2532 - 0.0016*(t2450*t2528 + t2443*t2532) - 0.2707*t2540;
  p_output1[11]=0;
  p_output1[12]=t2277*t2278*t2291*t2360 + t2278*t2280*t2326*t2360 - 1.*t2278*t2290*t2370 + t2357*t2547 + 0.1305*(t2278*t2290*t2353 + t2334*t2547) + t2403*t2556 + t2419*t2560 + t2428*t2564 + t2437*t2568 + t2453*t2572 + t2467*t2576 - 0.0016*(t2450*t2572 + t2443*t2576) - 0.2707*(t2443*t2572 - 1.*t2450*t2576);
  p_output1[13]=t2277*t2289*t2291*t2360 + t2280*t2289*t2326*t2360 - 1.*t2289*t2290*t2370 + t2357*t2591 + 0.1305*(t2289*t2290*t2353 + t2334*t2591) + t2403*t2600 + t2419*t2604 + t2428*t2608 + t2437*t2612 + t2453*t2616 + t2467*t2620 - 0.0016*(t2450*t2616 + t2443*t2620) - 0.2707*(t2443*t2616 - 1.*t2450*t2620);
  p_output1[14]=-1.*t2277*t2290*t2291 - 1.*t2280*t2290*t2326 - 1.*t2360*t2370 + t2357*t2635 + 0.1305*(t2353*t2360 + t2334*t2635) + t2403*t2644 + t2419*t2648 + t2428*t2652 + t2437*t2656 + t2453*t2660 + t2467*t2664 - 0.0016*(t2450*t2660 + t2443*t2664) - 0.2707*(t2443*t2660 - 1.*t2450*t2664);
  p_output1[15]=t2277*t2491 + t2326*t2678 + 0.1305*t2334*t2681 + t2357*t2681 + t2353*t2403*t2681 + t2419*t2687 + t2428*t2691 + t2437*t2695 + t2453*t2699 + t2467*t2703 - 0.0016*(t2450*t2699 + t2443*t2703) - 0.2707*(t2443*t2699 - 1.*t2450*t2703);
  p_output1[16]=t2309*t2326 + t2277*t2716 + 0.1305*t2334*t2721 + t2357*t2721 + t2353*t2403*t2721 + t2419*t2726 + t2428*t2730 + t2437*t2734 + t2453*t2738 + t2467*t2742 - 0.0016*(t2450*t2738 + t2443*t2742) - 0.2707*(t2443*t2738 - 1.*t2450*t2742);
  p_output1[17]=t2277*t2280*t2360 - 1.*t2291*t2326*t2360 + t2758 + t2759 + t2760 + t2764 + t2768 + t2772 + t2776 + t2780 + t2784 + t2788;
  p_output1[18]=0.135*t2319*t2487 - 0.135*t2249*t2491 + 0.1305*t2334*t2513 + t2357*t2513 + t2353*t2403*t2513 + t2419*t2796 + t2428*t2800 + t2437*t2804 + t2453*t2808 + t2467*t2812 - 0.0016*(t2450*t2808 + t2443*t2812) - 0.2707*(t2443*t2808 - 1.*t2450*t2812);
  p_output1[19]=-0.135*t2249*t2716 + 0.135*t2319*t2826 + 0.1305*t2334*t2829 + t2357*t2829 + t2353*t2403*t2829 + t2419*t2834 + t2428*t2838 + t2437*t2842 + t2453*t2846 + t2467*t2850 - 0.0016*(t2450*t2846 + t2443*t2850) - 0.2707*(t2443*t2846 - 1.*t2450*t2850);
  p_output1[20]=-0.135*t2249*t2280*t2360 + 0.135*t2291*t2319*t2360 + t2758 + t2759 + t2760 + t2764 + t2768 + t2772 + t2776 + t2780 + t2784 + t2788;
  p_output1[21]=0.1305*(-1.*t2278*t2334*t2360 - 1.*t2353*t2495) + t2403*t2502 + t2383*t2428*t2502 - 1.*t2396*t2437*t2502 + t2278*t2360*t2866 + t2495*t2869 + t2453*t2880 + t2467*t2884 - 0.0016*(t2450*t2880 + t2443*t2884) - 0.2707*(t2443*t2880 - 1.*t2450*t2884);
  p_output1[22]=t2289*t2360*t2866 + t2869*t2898 + 0.1305*(t2379 - 1.*t2353*t2898) + t2403*t2902 + t2383*t2428*t2902 - 1.*t2396*t2437*t2902 + t2453*t2911 + t2467*t2915 - 0.0016*(t2450*t2911 + t2443*t2915) - 0.2707*(t2443*t2911 - 1.*t2450*t2915);
  p_output1[23]=-1.*t2290*t2866 + t2869*t2929 + 0.1305*(t2290*t2334 - 1.*t2353*t2929) + t2403*t2933 + t2383*t2428*t2933 - 1.*t2396*t2437*t2933 + t2453*t2943 + t2467*t2947 - 0.0016*(t2450*t2943 + t2443*t2947) - 0.2707*(t2443*t2943 - 1.*t2450*t2947);
  p_output1[24]=t2428*t2524 + t2513*t2959 + t2507*t2963 + t2437*t2967 + t2467*t2971 + t2453*t2975 - 0.2707*(-1.*t2450*t2971 + t2443*t2975) - 0.0016*(t2443*t2971 + t2450*t2975);
  p_output1[25]=t2829*t2959 + t2963*t2989 + t2437*t2993 + t2428*t2997 + t2467*t3001 + t2453*t3005 - 0.2707*(-1.*t2450*t3001 + t2443*t3005) - 0.0016*(t2443*t3001 + t2450*t3005);
  p_output1[26]=t2757*t2959 + t2963*t3019 + t2437*t3023 + t2428*t3027 + t2467*t3031 + t2453*t3035 - 0.2707*(-1.*t2450*t3031 + t2443*t3035) - 0.0016*(t2443*t3031 + t2450*t3035);
  p_output1[27]=t2467*t2528 + t2519*t3048 + t2524*t3051 + t2453*t3055 - 0.0016*(t2538 + t2450*t3055) - 0.2707*(t2443*t3055 + t3057);
  p_output1[28]=t2997*t3051 + t3048*t3067 + t2467*t3071 + t2453*t3074 - 0.2707*(t2443*t3074 + t3076) - 0.0016*(t2450*t3074 + t3080);
  p_output1[29]=t3027*t3051 + t3048*t3087 + t2467*t3091 + t2453*t3094 - 0.2707*(t2443*t3094 + t3096) - 0.0016*(t2450*t3094 + t3100);
  p_output1[30]=-0.0016*t2540 - 0.2707*(-1.*t2443*t2532 + t3057) + t2528*t3106 + t2532*t3110;
  p_output1[31]=t3071*t3106 + t3110*t3120 - 0.2707*(t3076 - 1.*t2443*t3120) - 0.0016*(t3080 - 1.*t2450*t3120);
  p_output1[32]=t3091*t3106 + t3110*t3132 - 0.2707*(t3096 - 1.*t2443*t3132) - 0.0016*(t3100 - 1.*t2450*t3132);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_knee_to_shin_left_mex.hh"

namespace SymExpression
{

void J_knee_to_shin_left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
