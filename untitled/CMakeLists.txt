cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled algorithmic_toolbox/test.cpp
        calculator/calculator_II.cpp DSA_ASSIGNMENTS/arrays_practice/array_sorting.cpp DSA_ASSIGNMENTS/arrays_practice/array1.cpp
        DSA_ASSIGNMENTS/arrays_practice/arrays3.cpp DSA_ASSIGNMENTS/arrays_practice/array4.cpp DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp
        DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp DSA_ASSIGNMENTS/arrays_practice/array4_1.cpp DSA/MATRIX/matrix.cpp
        DSA_ASSIGNMENTS/assignment_1/assignment_1_using_struct.cpp DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp
        DSA_ASSIGNMENTS/assignment_1/main_interface.cpp algorithmic_toolbox/sum1.cpp DSA_ASSIGNMENTS/arrays_practice/ass1.cpp
        DSA_ASSIGNMENTS/arrays_practice/ass1_again.cpp
        algorithmic_toolbox DM/linear_searrch.cpp
        DM/occurances.cpp DSA_ASSIGNMENTS/assignment_3_queue/circular_queue_2.cpp DSA_ASSIGNMENTS/assignment_3_queue/queue_final.cpp
        DM/DM_lists.cpp DSA/STL/vectors_tut.cpp DSA/TEMPLATES/templates.cpp
        DSA/STACK/stack_assignment DSA/STACK/stack_assignment/linkedlistwithstack.h DSA/TREES/sorting_algorithms/selectionSort.cpp
        DSA/TREES/sorting_algorithms/BubbleSort.cpp DSA/TREES/sorting_algorithms/InsertionSort.cpp
        DSA/TREES/sorting_algorithms/MergeSort.cpp DSA/TREES/sorting_algorithms/QuickSort.cpp
        DSA/QUEUE/queue_again/queue_final.h DSA/QUEUE/queue_again/queue_impl.cpp DSA/QUEUE/queue_again/queue_main.cpp DSA/LINKED_LIST/Single_LL/List.h
        DSA/LINKED_LIST/Single_LL/List_impl.cpp DSA/LINKED_LIST/Single_LL/list_main.cpp DSA/STACK/stack_2/stack_again.cpp
        DSA/LINKED_LIST/Single_LL/LinkedList_again/LL._again.cpp DSA/LINKED_LIST/Single_LL/LinkedList_again/LL_Final_code.cpp
        OLD/HackerRank/display_LL.cpp
        OLD/HackerRank/insert_at_tail.cpp OLD/HackerRank/insert_at_head.cpp
        OLD/HackerRank/insert_at_middle.cpp OLD/HackerRank/delete_a_node.cpp
        OLD/HackerRank/get_node_value.cpp OLD/HackerRank/reverse_LL.cpp
        OLD/GFG/LL/count_nodes.cpp OLD/GFG/LL/delete_without_head_pointer.cpp
        OLD/GFG/LL/occurance_in_LL.cpp DSA/LINKED_LIST/Double_LL/double_LL.cpp
        OLD/GFG/LL/LL_length_even_or_odd.cpp OLD/GFG/LL/Count_Pairs_whose_sum_is_equal_to_X.cpp
        OLD/GFG/LL/Add_two_numbers_represented_by_Linked_List.cpp OLD/GFG/LL/Identical_LL.cpp
        OLD/GFG/LL/delete_alternate_nodes.cpp OLD/GFG/LL/Add_1_to_LL.cpp DSA/LINKED_LIST/Circular_LL/Circular_LL.cpp
        OLD/GFG/LL/decimal_eq_of_binary_LL.cpp OLD/GFG/LL/subtraction_in_LL.cpp DSA/QUEUE/queue_code.cpp
        DSA/QUEUE/circular_queue.cpp OLD/GFG/Queue/queue_using_array.cpp OLD/GFG/LL/find_middle_of_LL.cpp
        OLD/GFG/LL/insert_in_middle.cpp OLD/GFG/LL/node_at_given_index.cpp OLD/GFG/Queue/queue_push_and_pop.cpp
        OLD/GFG/Queue/STL_queue.cpp OLD/GFG/Queue/queue_reversal.cpp OLD/GFG/Arrays/fighting_darkness.cpp
        OLD/GFG/Arrays/check_array_equality.cpp OLD/GFG/Arrays/rotate_array.cpp
        OLD/GFG/Queue/queue_using_LL.cpp OLD/GFG/LL/sum_of_last_n_nodes.cpp
        OLD/GFG/LL/LL_insertion.cpp DSA/STACK/Stack/stack_code.cpp DSA/QUEUE/queue_using_LL.cpp
        OLD/GFG/Queue/queue_using_two_stacks.cpp OLD/GFG/LL/Stack.cpp
        OLD/GFG/LL/linked_list_of_strings_forms_a_palindrome.cpp OLD/GFG/LL/compare_two_LL.cpp
        OLD/GFG/LL/sort_LL.cpp DSA/STACK/Stack/stack_using_LL.cpp DSA/STACK/Stack/Expression_conversions/infix_to_postfix.cpp
        DSA/STACK/Stack/Expression_conversions/infix_to_prefix.cpp DSA/STACK/Stack/Expression_conversions/postfix_to_infix.cpp DSA/STACK/Stack/Expression_conversions/prefix_to_infix.cpp
        DSA_ASSIGNMENTS/DSAL_mock/DSA_mock_test.cpp ROUGH_FILES/rough2.cpp DSA_ASSIGNMENTS/DSAL_mock/header.h DSA_ASSIGNMENTS/DSAL_mock/impl.cpp DSA_ASSIGNMENTS/DSAL_mock/main.cpp
        OLD/GFG/Stack/stack_designer.cpp OLD/GFG/Stack/stack_using_array.cpp
        OLD/GFG/Stack/pairwise_consecutive_elements.cpp OLD/GFG/Stack/immediate_smaller_element.cpp
        OLD/GFG/Stack/remove_repeated_digits.cpp OLD/GFG/Stack/delete_middle_element_of_stack.cpp
        OLD/GFG/Stack/stack_using_LL.cpp OLD/GFG/Stack/valid_substring.cpp
        OLD/GFG/Stack/special_stack.cpp OLD/GFG/Stack/print_bracket_no.cpp
        OLD/GFG/Stack/sorting_stack.cpp OLD/GFG/Stack/get_min_at_pop.cpp
        OLD/GFG/Stack/impl_two_stacks_in_array.cpp OLD/GFG/Queue/generate_binary_no.cpp
        OLD/GFG/Stack/reverse_a_string.cpp OLD/GFG/Stack/stack_using_two_queues.cpp
        DSA/TREES/BST/BST_impl.cpp OLD/GFG/searching/Count_zeros_in_a_sorted_matrix.cpp
        DSA/TEMPLATES/templates2.cpp DSA/TEMPLATES/function_templates.cpp
        DSA/TEMPLATES/overloading_templates.cpp DSA/STL/Lists.cpp DSA/STL/maps.cpp
        DSA/STL/function_objects.cpp
        DSA_ASSIGNMENTS/assignment_3_queue/queue.h DSA_ASSIGNMENTS/assignment_3_queue/main.cpp DSA_ASSIGNMENTS/assignment_3_queue/impl.cpp
        DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp DSA_ASSIGNMENTS/assignment_1/main_interface.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/mainFile.cpp DSA_ASSIGNMENTS/assignment_2_stack/stack_impl.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/Stack.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/Assignment4.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/StackHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/StackImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionImplementation.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST.cpp DSA_ASSIGNMENTS/assignment_5_BST/BST.h DSA_ASSIGNMENTS/assignment_5_BST/BST_Main.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/stack_final.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/exp_tree_final.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST_final.cpp
        DSA_ASSIGNMENTS/assignment_7/assignment_7.cpp DSA_ASSIGNMENTS/assignment_8/assignment_8.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/tbt.h DSA_ASSIGNMENTS/assignment_6_TBT/tbt_impl.cpp DSA_ASSIGNMENTS/assignment_6_TBT/tbt_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_header.h
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_impl.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/HEAP.cpp
        ROUGH_FILES/rough3.cpp DSA/GRAPHS_OLD/MST_kruskal.cpp DSA/GRAPHS_OLD/MST_Prim.cpp
        DSA_ASSIGNMENTS/assignment_10/assignment_10.cpp
        DSA_ASSIGNMENTS/assignment_7/mst_header.h DSA_ASSIGNMENTS/assignment_7/mst_impl.cpp DSA_ASSIGNMENTS/assignment_7/mst_main.cpp
        DSA_ASSIGNMENTS/assignment_8/dijk_header.h DSA_ASSIGNMENTS/assignment_8/dijk_impl.cpp DSA_ASSIGNMENTS/assignment_8/dijk_main.cpp
        DSA_ASSIGNMENTS/assignment_10/header.h DSA_ASSIGNMENTS/assignment_10/impl.cpp DSA_ASSIGNMENTS/assignment_10/main.cpp
        DSA/STL/hashing.cpp DSA/STL/sets.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/TBT_FINAL.cpp ROUGH_FILES/rough4.cpp ROUGH_FILES/rough5.cpp
        algorithmic_toolbox/week3/money_change.cpp
        algorithmic_toolbox/week3/max_loot.cpp
        algorithmic_toolbox/week3/car_fueling.cpp
        DSA/TEMPLATES/unordered_maps.cpp
        DSA/GRAPHS_OLD/graph.cpp DSA/GRAPHS_OLD/graph2.cpp DSA/GRAPHS/GRAPHS_CN/prim.cpp
        DSA/GRAPHS/GRAPHS_CN/dijkstra.cpp DSA/DEQUEUE/dequeue.cpp DSA/DEQUEUE/deque2.cpp
        DSA/DEQUEUE/deque3.cpp DSA/EXPONENTATION/mod_exp.cpp DSA/EXPONENTATION/matrix_exp.cpp DSA/STL/priority_queue.cpp
        ROUGH_FILES/rough1.cpp
        DSA/RECURSION/fib.cpp DSA/RECURSION/is_array_sorted.cpp
        DSA/RECURSION/first_index.cpp DSA/RECURSION/last_index.cpp
        DSA/RECURSION/all_indices.cpp DSA/RECURSION/find_char_arr_length.cpp
        DSA/SLIDING_WINDOW/FSSW/max_sum_subarray_size_k.cpp
        DSA/TREES/Trees_CN/tree_node.h DSA/TREES/Trees_CN/tree_use.cpp DSA/TREES/Binary_Trees_CN/binary_tree_node.h
        DSA/TREES/Binary_Trees_CN/binary_tree_use.cpp
        DSA/TREES/Binary_Trees_CN/binary_tree_main.cpp DSA/TREES/BST_CN/BST.h
        DSA/TREES/BST_CN/BST_use.cpp DSA/LINKED_LIST/LinkedList_CN/LL_node.cpp DSA/LINKED_LIST/LinkedList_CN/LL_node.h
        DSA/LINKED_LIST/LinkedList_CN/LL_main.cpp DSA/TREES/TBT/TBT.h DSA/HEAP_OLD/heap.h
        DSA/HEAP_OLD/heap_use.cpp DSA/HEAP_OLD/heap_main.cpp
        DSA/GRAPHS_OLD/grpahs_use.cpp DSA/GRAPHS_OLD/kruskal.cpp DSA/GRAPHS_OLD/Prim.cpp
        DSA/GRAPHS_OLD/Dijikstras.cpp DSA/STACK/EXP_CONVERSIONS_AGAIN/infix_to_postfix.cpp
        DSA/STACK/EXP_CONVERSIONS_AGAIN/infix_to_prefix.cpp DSA/SORTING_ALGORITHMS/SORTING_AGAIN/merge_sort.cpp
        DSA/SORTING_ALGORITHMS/SORTING_AGAIN/quick_sort.cpp DSA/STACK/EXP_TREE/exp_tree_impl.cpp DSA/STACK/EXP_TREE/exp_tree.h
        DSA/STACK/EXP_TREE/exp_tree.h DSA/FILE_HANDLING/file_handling.cpp
        DSA/FILE_HANDLING/file_handling_2.cpp DSA/FILE_HANDLING/file_handling_FINAL.cpp
        DSA/DP/DP_EXTRAS/fib.cpp DSA/DP/DP_EXTRAS/min_steps.cpp DSA/DP/DP_EXTRAS/min_count.cpp
        DAA_ASSIGNMENTS/n_queens.cpp DAA_ASSIGNMENTS/fractional_knapsack_using_greedy.cpp
        DSA/BACKTRACKING/n_queens.cpp DSA/BACKTRACKING/rat_in_a_maze.cpp
        DSA/BINARY_SEARCH/aggressive_cows.cpp DAA_ASSIGNMENTS/knapsack_01.cpp
        DSA/DP/bounded_knapsack/knapsack.cpp DSA/DP/bounded_knapsack/subset_sum.cpp DSA/DP/bounded_knapsack/equal_sum_partition.cpp
        DSA/DP/bounded_knapsack/count_subsets_sum_with_given_sum.cpp DSA/DP/bounded_knapsack/min_sum_partition.cpp
        DSA/DP/bounded_knapsack/count_no_of_subsets_with_given_difference.cpp DSA/DP/bounded_knapsack/target_sum.cpp
        DSA/DP/unbounded_knapsack/unbounded_knapsack.cpp DSA/DP/unbounded_knapsack/rod_cutting.cpp
        DSA/DP/unbounded_knapsack/coin_change_one.cpp DSA/DP/unbounded_knapsack/coin_change_two.cpp
        DSA/DP/DP_LCS/lcs.cpp DSA/DP/DP_LCS/longest_common_substring.cpp
        DSA/DP/DP_LCS/scs.cpp DSA/DP/DP_LCS/min_no_of_insertions_deletions_to_convert_a_to_b.cpp
        DSA/DP/DP_LPS/lps.cpp DSA/DP/DP_LPS/min_deletions_to_make_palindrome.cpp
        DSA/DP/DP_LCS/lrs.cpp DSA/DP/DP_LCS/sequence_pattern_matching.cpp
        DSA/DP/DP_LPS/min_insertions_to_form_palindrome.cpp DSA/DP/DP_MCM/mcm.cpp
        DSA/DP/DP_LCS/edit_distance.cpp DSA/DP/DP_MCM/palindromic_partitioning.cpp
        DSA/DP/DP_MCM/boolean_parenthesization.cpp DSA/DP/DP_MCM/egg_dropping.cpp
        DSA/DP/DP_MCM/scrambled_string.cpp DSA/DP/DP_EXTRAS/get_min_squares.cpp DSA/DP/DP_EXTRAS/min_cost_path_2.cpp
        DSA/DP/DP_EXTRAS/max_cost_path.cpp DSA/SLIDING_WINDOW/FSSW/first_-ve_no_in_every_window_size_k.cpp
        DSA/SLIDING_WINDOW/FSSW/count_occurrance_of_anagrams.cpp DSA/SLIDING_WINDOW/FSSW/max_of_all_subarrays_of_size_k.cpp
        DSA/SLIDING_WINDOW/VSSW/largest_subarray_of_sum_K.cpp DSA/SLIDING_WINDOW/VSSW/subarray_with_given_sum.cpp
        DSA/SLIDING_WINDOW/VSSW/longest_substring_with_K_unique_characters.cpp
        DSA/SLIDING_WINDOW/VSSW/longest_substring_without_repeating_characters.cpp
        DSA/SLIDING_WINDOW/VSSW/pick_toys.cpp DSA/SLIDING_WINDOW/VSSW/min_window_substring.cpp
        DSA/DP/DP_EXTRAS/lis.cpp DSA/DP/DP_EXTRAS/loot_houses.cpp DSA/DP/DP_EXTRAS/max_square_matrix_with_all_zeroes.cpp
        DSA/DP/DP_EXTRAS/sus.cpp DSA/DP/DP_EXTRAS/lus.cpp DSA/STACK/ngr.cpp
        DSA/STACK/ngl.cpp DSA/STACK/nsl.cpp
        DSA/STACK/nsr.cpp DSA/STACK/stock_span.cpp
        DSA/STACK/mah.cpp DSA/STACK/mar.cpp DSA/STACK/rwt.cpp
        DSA/STACK/celebrity.cpp DSA/DP/DP_LCS/lcs_of_3_strings.cpp
        DSA/DP/DP_EXTRAS/print_all_ss_of_a_string.cpp DSA/DP/DP_EXTRAS/string_ss.cpp DSA/DP/DP_EXTRAS/count_all_possible_paths.cpp
        DSA/DP/DP_EXTRAS/gold_mine.cpp DSA/DP/DP_EXTRAS/count_ways_to_reach_nth_stair.cpp
        DSA/DP/DP_EXTRAS/min_steps_to_dest.cpp DSA/DP/DP_EXTRAS/distinct_occurrences.cpp
        DSA/DP/DP_EXTRAS/min_no_of_jumps.cpp DSA/DP/DP_EXTRAS/count_no_of_substrings.cpp
        DSA/DP/DP_EXTRAS/interleaved_strings.cpp DSA/DP/DP_EXTRAS/msis.cpp
        DSA/DP/DP_EXTRAS/box_stacking.cpp DSA/DP/DP_EXTRAS/las.cpp DSA/DP/DP_EXTRAS/max_chain_length.cpp
        DSA/DP/DP_LPS/longest_palindrome_in_a_string.cpp DSA/DP/DP_EXTRAS/bell_numbers.cpp
        DSA/DP/DP_EXTRAS/friends_pairing.cpp DSA/DP/DP_EXTRAS/no_of_distinct_ss.cpp
        DSA/DP/DP_EXTRAS/wildcard_pattern_matching.cpp DSA/DP/DP_EXTRAS/word_break.cpp
        DSA/DP/DP_EXTRAS/max_product_subarray.cpp DSA/DP/DP_EXTRAS/longest_subsequence_-1.cpp
        DSA/BINARY_SEARCH/bs.cpp DSA/BINARY_SEARCH/bs_on_reverse_sorted_array.cpp
        DSA/BINARY_SEARCH/first_and_last_occurrence.cpp DSA/BINARY_SEARCH/count_of_an_element_in_sorted_array.cpp
        DSA/BINARY_SEARCH/no_of_times_a_sorted_array_is_rotated.cpp DSA/BINARY_SEARCH/find_an_element_in_rotated_sorted_array.cpp
        DSA/BINARY_SEARCH/min_element_in_rotated_sorted_array.cpp DSA/BINARY_SEARCH/searching_in_nearly_sorted_array.cpp
        DSA/BINARY_SEARCH/floor_in_a_sorted_array.cpp DSA/BINARY_SEARCH/cell_in_a_sorted_array.cpp
        DSA/BINARY_SEARCH/next_alphabetical_element.cpp DSA/BINARY_SEARCH/min_diff_element_in_sorted_array.cpp
        DSA/BINARY_SEARCH/peak_element.cpp DSA/BINARY_SEARCH/find_max_element_in_bitonic_array.cpp
        DSA/BINARY_SEARCH/search_in_sorted_matrix.cpp DSA/BINARY_SEARCH/allocate_min_no_of_pages.cpp
        DSA/BINARY_SEARCH/smallest_factorial_no.cpp DSA/BINARY_SEARCH/median_in_row_wise_sorted_matrix.cpp
        DSA/BINARY_SEARCH/find_nth_root.cpp DSA/DP/DP_EXTRAS/max_sum_bitonic_subsequence.cpp DSA/DP/DP_EXTRAS/max_bitonic_subarray_sum.cpp
        DSA/DP/DP_EXTRAS/lbs.cpp DSA/BINARY_SEARCH/capacity_to_ship_packages_within_d_days.cpp
        DSA/RECURSION/sort_array.cpp DSA/DP/DP_EXTRAS/lcis.cpp DSA/RECURSION/sort_stack.cpp
        DSA/RECURSION/delete_middle_element_of_stack.cpp DSA/RECURSION/reverse_stack.cpp
        DSA/RECURSION/kth_symbol_in_grammar.cpp DSA/RECURSION/power_set.cpp DSA/RECURSION/unique_subsets.cpp
        DSA/RECURSION/permutation_with_spaces.cpp DSA/RECURSION/permutation_with_case_change.cpp
        DSA/RECURSION/letter_case_permutation.cpp DSA/RECURSION/generate_all_balanced_paranthesis.cpp
        DSA/RECURSION/binary_nos_having_more_equal_1s_than_0s_for_all_prefixes.cpp
        DSA/RECURSION/josephus_problem.cpp DSA/RECURSION/string_permutations.cpp
        DSA/RECURSION/pascal_triangle.cpp DSA/DP/DP_EXTRAS/pascal_triangle.cpp
        DSA/RECURSION/lucky_numbers.cpp DSA/RECURSION/all_unique_permutations_of_array.cpp
        DSA/RECURSION/handshakes.cpp DSA/GREEDY/fractional_knapsack.cpp DSA/GREEDY/job_sequencing.cpp
        DSA/GREEDY/n_meetings_in_one_room.cpp DSA/GREEDY/minimum_platforms.cpp
        DSA/GREEDY/activity_selection.cpp DSA/GREEDY/jump_game.cpp DSA/DP/unbounded_knapsack/min_coin.cpp
        DSA/GREEDY/choose_and_swap.cpp DSA/GREEDY/stock_buy_and_sell.cpp DSA/GREEDY/police_and_thieves.cpp
        DSA/GREEDY/shop_in_candy_store.cpp DSA/GREEDY/maximize_sum_after_k_negations.cpp
        DSA/GREEDY/buy_maximum_stocks.cpp DSA/GREEDY/min_cost_to_cut_board_into_squares.cpp
        DSA/GREEDY/survive_on_island.cpp DSA/GREEDY/min_cost_of_ropes.cpp DSA/GREEDY/max_equal_sum_of_three_stacks.cpp
        DSA/GREEDY/water_the_plants.cpp DSA/GREEDY/coin_piles.cpp DAA_ASSIGNMENTS/bellman_ford.cpp
        DSA/BINARY_SEARCH/unique_element_in_sorted_array.cpp DSA/RECURSION/combination_sum.cpp
        DSA/DP/bounded_knapsack/subset_sum_divisible_by_m.cpp DSA/DP/unbounded_knapsack/min_cost_to_fill_given_weight_in_bag.cpp
        ROUGH_FILES/rough6.cpp DSA/DP/DP_EXTRAS/consecutive_ones_not_allowed.cpp
        DSA/DP/DP_EXTRAS/lap.cpp DSA/DP/DP_EXTRAS/total_decoding_messages.cpp DSA/DP/DP_EXTRAS/optimal_strategy_for_game.cpp
        DSA/DP/DP_LPS/count_palindromic_subsequences.cpp DSA/DP/unbounded_knapsack/no_of_ways_to_sum_to_N.cpp
        DSA/GRAPHS/bfs_dfs_connected_graph.cpp DSA/GRAPHS/bfs_dfs_disconnected_graph.cpp
        DSA/GRAPHS/has_path.cpp DSA/GRAPHS/dfs_using_stack.cpp DSA/GRAPHS/get_path_using_dfs.cpp
        DSA/GRAPHS/get_path_using_bfs.cpp DSA/GRAPHS/is_graph_connected.cpp DSA/GRAPHS/print_all_connected_components.cpp
        DSA/GRAPHS/detect_cycle_in_undirected_graph_using_dfs.cpp DSA/GRAPHS/detect_cycle_in_directed_graph_using_dfs.cpp
        DSA/GRAPHS/mother_vertex.cpp DSA/GRAPHS/check_bridge_edge_or_not.cpp DSA/GRAPHS/possible_paths_between_2_vertices.cpp
        DSA/GRAPHS/check_bipartite_graph_using_dfs.cpp DSA/GRAPHS/check_bipartite_graph_using_bfs.cpp
        DSA/GRAPHS/topological_sort_using_dfs.cpp DSA/GRAPHS/bfs.cpp DSA/GRAPHS/dfs.cpp
        DSA/GRAPHS/topological_sort_using_bfs.cpp DSA/GRAPHS/detect_cycle_in_directed_graph_using_bfs.cpp
        DSA/GRAPHS/shortest_path_in_undirected_graph_with_unit_weights.cpp DSA/GRAPHS/shortest_path_in_weighted_dag_using_dfs.cpp
        DSA/GRAPHS/find_no_of_islands_dfs.cpp DSA/GREEDY/min_swaps_to_sort.cpp DSA/GRAPHS/dijkstra.cpp DSA/GRAPHS/GRAPHS_CN/kruskal.cpp
        DSA/GRAPHS/kruskal.cpp DSA/GRAPHS/shortest_source_to_destination_path.cpp DSA/GRAPHS/covid19.cpp
        DSA/GRAPHS/covid_spread.cpp DSA/GRAPHS/find_whether_path_exists.cpp DSA/GRAPHS/rotten_oranges.cpp
        DSA/GRAPHS/distance_of_nearest_cell_having_1.cpp DSA/GRAPHS/count_paths_from_s_to_d_in_directed_graph.cpp
        DSA/GRAPHS/count_paths_with_exactly_k_edges.cpp DSA/DP/DP_EXTRAS/count_paths_with_exactly_k_edges.cpp
        DSA/GRAPHS/articulation_point.cpp DSA/GRAPHS/kosaraju_tarjan.cpp DSA/GRAPHS/steps_by_knight.cpp
        DSA/GRAPHS/bellman_ford.cpp DSA/GRAPHS/prim.cpp DSA/GRAPHS/unit_area_of_largest_region_of_ones.cpp
        DSA/GRAPHS/find_no_of_islands_bfs.cpp DSA/GRAPHS/min_cost_path.cpp DSA/DP/DP_EXTRAS/min_cost_path.cpp
        DSA/GRAPHS/x_total_shapes_dfs.cpp DSA/GRAPHS/x_total_shapes_bfs.cpp DSA/GRAPHS/prerequisite_tasks_using_dfs.cpp
        DSA/GRAPHS/prerequisite_tasks_using_bfs.cpp DSA/GRAPHS/flood_fill_using_dfs.cpp DSA/GRAPHS/flood_fill_using_bfs.cpp
        DSA/GRAPHS/word_search_dfs.cpp DSA/GRAPHS/transitive_closure_of_graph.cpp DSA/GRAPHS/word_ladder_I.cpp
        DSA/GRAPHS/replace_O's_with_X's_dfs.cpp DSA/GRAPHS/replace_O's_with_X's_dfs_alternative.cpp DSA/GRAPHS/replace_O's_with_X's_bfs.cpp
        DSA/GRAPHS/eulerian_circuit_and_path_in_undirected_graph.cpp DSA/GRAPHS/no_of_provinces.cpp DSA/GRAPHS/critical_connections.cpp
        DSA/GRAPHS/floyd_warshall.cpp DSA/GRAPHS/snake_and_ladder_bfs.cpp DSA/GRAPHS/alien_dictionary.cpp
        DSA/GRAPHS/circle_of_strings.cpp DSA/HEAP/kth_smallest_element.cpp DSA/HEAP/k_largest_elements.cpp
        DSA/HEAP/k_sorted_array.cpp DSA/HEAP/nearly_sorted_algorithm.cpp DSA/HEAP/k_closest_elements.cpp
        DSA/HEAP/top_k_frequent_elements.cpp DSA/HEAP/frequency_sort.cpp
        DSA/HEAP/k_closest_points_to_origin.cpp DSA/HEAP/min_cost_of_ropes.cpp DSA/HEAP/sum_of_elements_between_k1th_and_k2th_smallest_elements.cpp
        DSA/HEAP/kth_largest_element_in_a_stream.cpp DSA/HEAP/adding_array_elements.cpp DSA/HEAP/max_distinct_elements_after_removing_k_elements.cpp
        DSA/HEAP/maximize_the_array.cpp DSA/HEAP/merge_k_sorted_arrays.cpp DSA/HEAP/min_sum_formed_by_digits.cpp
        DSA/HEAP/game_with_string.cpp DSA/HEAP/merge_two_binary_max_heaps.cpp DSA/HEAP/shortest_path_between_cities.cpp
        DSA/HEAP/rearrange_characters.cpp DSA/HEAP/heap_sort.cpp DSA/STRINGS/count_and_say.cpp
        DSA/STRINGS/split_binary_string_into_substrings_of_0's_and_1's.cpp)


